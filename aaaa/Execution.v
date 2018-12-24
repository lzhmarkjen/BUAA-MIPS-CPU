`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:23 11/23/2018 
// Design Name: 
// Module Name:    Execution 
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
`define LB    (Op==6'b100000)
`define LBU   (Op==6'b100100)
`define LH    (Op==6'b100001)
`define LHU   (Op==6'b100101)
`define LW    (Op==6'b100011)
`define SB    (Op==6'b101000)
`define SH    (Op==6'b101001)
`define SW    (Op==6'b101011)
`define ADD   (Op==6'b000000 & Func==6'b100000)
`define ADDI  (Op==6'b001000)
`define SUB   (Op==6'b000000 & Func==6'b100010)
///////////////////////////////////////////////////
module Execution(
	input [31:0]PC2,
	input [31:0]A2in,
	input [31:0]B2in,
	input [31:0]imm32_2,
	input [31:0]Instr2,
	input clk,
	input reset,
	input IntReq,
	input Rollback,
	input Start,
	input BD2,
	input [31:0]Result3in,//Transpond
	input [1:0]ForwardRSE,
	input [1:0]ForwardRTE,
	input [31:0]WD,//Transpond
	output [31:0]PC3,
	output [31:0]Result3,
	output [31:0]B3,
	output [31:0]Instr3,
	output [4:0]WA3,
	output [31:0]imm32_3,
	output Busy,
	output Ov,
	output ADEL,
	output ADES,
	output eret_reset,
	output BD3
    );
	
	wire [31:0]Result2in,A,B,B2,Result2out;
	wire ALUSrc;
	wire [3:0]ALUOp;
	wire [1:0]RegDst;
	wire [4:0]WA2;
	
	wire [31:0]HILO;
	wire [1:0]ALUMultSel;
	
	Execution_Controller EC(
	.Instr2(Instr2),
	.ALUOp(ALUOp),
	.ALUSrc(ALUSrc),
	.RegDst(RegDst),
	.ALUMultSel(ALUMultSel),
	.eret_reset(eret_reset)
	);
/////////////////		Controller
	ALU alu(
	.A(A),
	.B(B),
	.ALUOp(ALUOp),
	.shift_offset(Instr2[10:6]),
	.Result(Result2in),
	.Overflow(Overflow)
	);
//////////////////	ALU
	MultModule XALU(
	.clk(clk),
	.reset(reset),
	.Instr2(Instr2),
	.A(A),
	.B2(B2),
	.Start(Start),
	.IntReq(IntReq),
	.Rollback(Rollback),
	.HILO(HILO),
	.Busy(Busy)
	);
//////////////////		MULT
	ALUSrcmux ALUSrcmux(
	.ALUSrc(ALUSrc),
	.RD2(B2),
	.imm32(imm32_2),
	.B(B)
	);
	
	RegDstmux RegDstmux(
	.RegDst(RegDst),
	.Rt(Instr2[20:16]),
	.Rd(Instr2[15:11]),
	.WA(WA2)
	);
	
	/*ALUMultmux ALUMultmux(
	.Result2(Result2in),
	.HILO(HILO),
	.ALUMultSel(ALUMultSel),
	.Result2out(Result2out)
	);*/
	assign Result2out = ALUMultSel==2'b01 ?      HILO:
							  ALUMultSel==2'b00 ? Result2in:
														 Result2in;
/////////////////		Mux
	MFRSE mfrse(
	.ForwardRSE(ForwardRSE),
	.A2(A2in),
	.Result3(Result3in),
	.WD(WD),
	.A(A)
	);
	MFRTE mfrte(
	.ForwardRTE(ForwardRTE),
	.B2in(B2in),
	.Result3(Result3in),
	.WD(WD),
	.B2(B2)
	);
//////////////////	Transpond Mux
	EX_MEM ex_mem(
	.PC2(PC2),
	.Instr2(Instr2),
	.Result2(Result2out),
	.B2(B2),
	.WA2(WA2),
	.clk(clk),
	.BD2(BD2),
	.reset(reset | IntReq),
	.imm32_2(imm32_2),//
	.PC3(PC3),
	.Instr3(Instr3),
	.Result3(Result3),
	.B3(B3),
	.WA3(WA3),
	.imm32_3(imm32_3),
	.BD3(BD3)
	);
/////////////////////////////	Store
	wire [5:0] Op = Instr2[31:26];
	wire [5:0] Func = Instr2[5:0];
	
	wire load     = `LB | `LBU | `LH | `LHU | `LW;
	wire store    = `SB | `SH | `SW;
		
	assign Ov = (`ADD | `ADDI | `SUB) & Overflow;
	
	assign ADEL = load  & Overflow;
	
	assign ADES = store & Overflow;
/////////////////////////////////	Exception part
endmodule
