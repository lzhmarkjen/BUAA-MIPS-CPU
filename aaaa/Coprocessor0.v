`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:59:14 12/14/2018 
// Design Name: 
// Module Name:    Coprocessor0 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define BEQ   (Op4==6'b000100)
`define BNE   (Op4==6'b000101)
`define BLEZ  (Op4==6'b000110)
`define BGTZ  (Op4==6'b000111)
`define BLTZ  (Op4==6'b000001 & Instr4[20:16]==5'b00000)
`define BGEZ  (Op4==6'b000001 & Instr4[20:16]==5'b00001)
`define J     (Op4==6'b000010)
`define JAL   (Op4==6'b000011)

`define JALR  (Op4==6'b000000 & Func4==6'b001001)
`define JR    (Op4==6'b000000 & Func4==6'b001000)
`define MULT  (Op3==6'b000000 & Func3==6'b011000)
`define MULTU (Op3==6'b000000 & Func3==6'b011001)
`define DIV   (Op3==6'b000000 & Func3==6'b011010)
`define DIVU  (Op3==6'b000000 & Func3==6'b011011)
`define MFHI  (Op3==6'b000000 & Func3==6'b010000)
`define MFLO  (Op3==6'b000000 & Func3==6'b010010)
`define MTHI  (Op3==6'b000000 & Func3==6'b010001)
`define MTLO  (Op3==6'b000000 & Func3==6'b010011)
`define MTC0  (Op3==6'b010000 & Instr3[25:21]==5'b00100)
`define ERET  (Op4==6'b010000 & Func4==6'b011000)

`define Int  0
`define AdEL 4
`define AdES 5
`define RI   10
`define Ov   12
`define im 15:10//中断允许位 1允许该外设中断
`define exl 1:1//1进入异常不允许再IntReq
`define ie 0:0//全局中断使能 1允许中断
`define bd 31:31
module Coprocessor0(
    input [4:0] ARead,
    input [4:0] AWrite,
    input [31:0] Din,
    input [31:0] PC,
    input [6:2] ExcCodein,
    input [7:2] HWInt,
    input CP0WE,
    input EXLSet,
    input EXLClr,
    input clk,
    input reset,
	 input [31:0]Instr3,
	 input [31:0]Instr4,
    output IntReq,
    output [31:0] EPCout,
    output [31:0] DOut,
	 output Rollback
    );
	
	reg [31:0] SR;//12 Write
	reg [31:0] CAUSE;//13
	reg [31:0] EPC;//14 Write
	reg [31:0] PrID;//15
	wire HWIntReq;
	wire ExcInt;
	
	assign DOut = ARead==5'd12 ?    SR:
					  ARead==5'd13 ? CAUSE:
					  ARead==5'd14 ?   EPC:
					  ARead==5'd15 ?  PrID:
										  32'b0;
										  
	assign EPCout = AWrite==5'd14 & CP0WE & ~IntReq? Din:EPC;
	
	assign HWIntReq = |(HWInt[7:2] & SR[`im]) & SR[`ie] & !SR[`exl];//硬件中断
	assign ExcInt  = ExcCodein!=5'b0 & !SR[`exl];//程序异常 & SR[`ie]
	
	wire [6:2]ExcCode = HWIntReq==0 ? ExcCodein:`Int;//中断的ExcCode大于异常

	assign IntReq = HWIntReq | ExcInt;
	
	initial begin
		SR = 0;
		CAUSE = 0;
		EPC = 0;
		PrID = 32'h66666666;
	end
	
	always@(posedge clk)begin
		if(reset)begin
			SR <= 0;
			CAUSE <= 0;
			EPC <= 0;
		end
		else begin
			CAUSE[15:10] <= HWInt;
			
			if(CP0WE & AWrite==5'd12 & ~IntReq)//Write SR
				SR <= Din;
			else if(CP0WE & AWrite==5'd14 & ~IntReq)//Write EPC
				EPC <= Din;
			//else if(CP0WE & AWrite==5'd13 & ~IntReq)//Write CAUSE #########	test only
			//	CAUSE <= Din;
				
			else if(EXLSet)
				SR[`exl] <= 1'b1;
				
			else if(EXLClr | `ERET)//如果ERET在W级，则重置EXL为0
				SR[`exl] <= 1'b0;
				
			else if(IntReq)begin//发生了中断或异常
				CAUSE[6:2] <= ExcCode;
				SR[`exl] <= 1'b1;
				if(branch | jump)begin//如果受害指令在延迟槽内,异常
					EPC <= {PC[31:2],2'b00} - 4;
					CAUSE[`bd] <= 1'b1;
				end
				/*else if(`JAL | `JALR)begin
					EPC <= {PC[31:2],2'b00} - 4;
					CAUSE[`bd] <= 1'b1;
				end*/
				else begin//不在延迟槽内
					EPC <= {PC[31:2],2'b00};
					CAUSE[`bd] <= 1'b0;
				end
			end
			
			
		end
	end
	
	wire [5:0] Op4 = Instr4[31:26];
	wire [5:0] Func4 = Instr4[5:0];
	wire [5:0] Op3 = Instr3[31:26];
	wire [5:0] Func3 = Instr3[5:0];
	assign branch  = `BEQ | `BNE | `BLEZ | `BGTZ | `BLTZ | `BGEZ ;
	assign jump = `J | `JAL | `JALR | `JR;
	
	assign Rollback = (`MULT | `MULTU | `DIV | `DIVU | `MTHI | `MTLO) & IntReq;//如果M级是乘法类，则XALU要回滚
endmodule
