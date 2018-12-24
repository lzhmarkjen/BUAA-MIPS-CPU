`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:31:05 11/23/2018 
// Design Name: 
// Module Name:    Decode 
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
`define ADDU  (Op==6'b000000 & Func==6'b100001)
`define SUB   (Op==6'b000000 & Func==6'b100010)
`define SUBU  (Op==6'b000000 & Func==6'b100011)
`define SLL   (Op==6'b000000 & Func==6'b000000)
`define SRL   (Op==6'b000000 & Func==6'b000010)
`define SRA   (Op==6'b000000 & Func==6'b000011)
`define SLLV  (Op==6'b000000 & Func==6'b000100)
`define SRLV  (Op==6'b000000 & Func==6'b000110)
`define SRAV  (Op==6'b000000 & Func==6'b000111)
`define AND   (Op==6'b000000 & Func==6'b100100)
`define OR    (Op==6'b000000 & Func==6'b100101)
`define XOR   (Op==6'b000000 & Func==6'b100110)
`define NOR   (Op==6'b000000 & Func==6'b100111)
`define ADDI  (Op==6'b001000)
`define ADDIU (Op==6'b001001)
`define ANDI  (Op==6'b001100)
`define ORI   (Op==6'b001101)
`define XORI  (Op==6'b001110)
`define LUI   (Op==6'b001111)
`define SLT   (Op==6'b000000 & Func==6'b101010)
`define SLTI  (Op==6'b001010)
`define SLTIU (Op==6'b001011)
`define SLTU  (Op==6'b000000 & Func==6'b101011)
`define BEQ   (Op==6'b000100)
`define BNE   (Op==6'b000101)
`define BLEZ  (Op==6'b000110)
`define BGTZ  (Op==6'b000111)
`define BLTZ  (Op==6'b000001)
`define BGEZ  (Op==6'b000001)
`define J     (Op==6'b000010)
`define JAL   (Op==6'b000011)
`define JALR  (Op==6'b000000 & Func==6'b001001)
`define JR    (Op==6'b000000 & Func==6'b001000)
`define MULT  (Op==6'b000000 & Func==6'b011000)
`define MULTU (Op==6'b000000 & Func==6'b011001)
`define DIV   (Op==6'b000000 & Func==6'b011010)
`define DIVU  (Op==6'b000000 & Func==6'b011011)
`define MFHI  (Op==6'b000000 & Func==6'b010000)
`define MFLO  (Op==6'b000000 & Func==6'b010010)
`define MTHI  (Op==6'b000000 & Func==6'b010001)
`define MTLO  (Op==6'b000000 & Func==6'b010011)
`define ERET  (Op==6'b010000 & Func==6'b011000)
`define MFC0  (Op==6'b010000)
`define MTC0  (Op==6'b010000)
////////////////////////////////////////////////////////////////
module Decode(
	input [31:0]Instr1old,//假如旧版指令1为未定义指令，则Instr1为nop
	input [31:0]PC1,
	input clk,
	input reset,
	input [31:0]WD,
	input [4:0]WA4,
	input RegWrite,
	input ID_EX_Clr,
	input [31:0]PC4,
	input IntReq,
	input [1:0]ForwardRSD,//Transpond
	input [1:0]ForwardRTD,
	input [31:0]Result3,//Transpond
	output [31:0] PC2,
	output [31:0] Instr2,
	output [31:0] A2,
	output [31:0] B2,
	output [31:0] imm32_2,
	output [2:0] PCSel,
	output [31:0] PC_j,
	output [31:0] PC_jr,
	output [31:0] PC_beq,
	output Start2,
	output RI,
	output BD2
    );
	
	wire [31:0]imm32,RD1,RD2;
	wire [1:0]ExtOp;
	wire [31:0]A1,B1;
	wire Start1;
	wire [31:0]Instr1;
	
	wire RD_AEqualB = (A1 == B1);
	wire RD_ASmall0 = (($signed(A1) < 0));
	wire RD_AEqual0 = (A1 == 0);
/////////////////		Comparater
	assign PC_j = {PC1[31:28],Instr1[25:0],2'b00};
	assign PC_jr = A1;
	assign PC_beq = PC1 + 4 + imm32;
//////////////////	PC Calculate
	wire BD1 = Instr2[31:26]==6'b000100 | Instr2[31:26]==6'b000101 | Instr2[31:26]==6'b000110 | 
				  Instr2[31:26]==6'b000111 | Instr2[31:26]==6'b000001 | Instr2[31:26]==6'b000001 | 
				  Instr2[31:26]==6'b000010 | Instr2[31:26]==6'b000011 |
				  Instr2[31:26]==6'b000000 & Instr2[5:0]==6'b001001 | 
				  Instr2[31:26]==6'b000000 & Instr2[5:0]==6'b001000;//if D is delay branch
//////////////////////////////////
	Decode_Controller DC(
	.RD_AEqualB(RD_AEqualB),
	.RD_ASmall0(RD_ASmall0),
	.RD_AEqual0(RD_AEqual0),
	.Instr1(Instr1),
	.IntReq(IntReq),//
	.ExtOp(ExtOp),
	.PCSel(PCSel),
	.Start1(Start1)
	);
//////////////////	Controller

	GRF grf(
	.RA1(Instr1[25:21]),
	.RA2(Instr1[20:16]),
	.WA(WA4),
	.WD(WD),
	.clk(clk),
	.reset(reset),
	.RegWrite(RegWrite),
	.PC(PC4),//
	.RD1(RD1),
	.RD2(RD2)
	);
/////////////////	GRF
	EXT ext(
	.imm16(Instr1[15:0]),
	.ExtOp(ExtOp),//
	.imm32(imm32)
	);
/////////////////	Ext
	MFRSD mfrsd(
	.ForwardRSD(ForwardRSD),
	.RD1(RD1),
	.Result3(Result3),
	.WD(WD),
	.A1(A1)
	);
	MFRTD mfrtd(
	.ForwardRTD(ForwardRTD),
	.RD2(RD2),
	.Result3(Result3),
	.WD(WD),
	.B1(B1)
	);
////////////////	Transpond Mux
	ID_EX id_ex(
	.PC1(PC1),
	.Instr1(Instr1),
	.clk(clk),
	.reset(reset | IntReq),
	.Stall(ID_EX_Clr),
	.imm32_1(imm32),
	.A1(A1),
	.B1(B1),
	.BD1(BD1),
	.Start1(Start1),//
	.PC2(PC2),
	.Instr2(Instr2),
	.imm32_2(imm32_2),
	.A2(A2),
	.B2(B2),
	.BD2(BD2),
	.Start2(Start2)
	);
	
	
//////////////////	Store
	wire [5:0] Op = Instr1old[31:26];//判断旧版Instr1是否为未定义指令
	wire [5:0] Func = Instr1old[5:0];
	
	wire un_RI = `LB | `LBU | `LH | `LHU | `LW | `SB | `SH | `SW | 
							   `ADD | `ADDU | `SUB | `SUBU |
							   `SLL | `SRL | `SRA | `SLLV | `SRLV | `SRAV |
							   `AND | `OR | `NOR | `XOR |
							   `ADDI | `ADDIU | `ANDI | `ORI | `XORI | `LUI |
							   `SLT | `SLTI | `SLTIU | `SLTU |
							   `BEQ | `BNE | `BLEZ | `BGTZ | `BLTZ | `BGEZ |
							   `J | `JAL | `JALR | `JR |
							   `MULT | `MULTU | `DIV | `DIVU |
							   `MFHI | `MFLO | `MTHI | `MTLO |
								`MFC0 | `MTC0 | `ERET;
	assign RI = ~un_RI;//若RI则表示未定义
	
	assign Instr1 = RI ? 32'b0:Instr1old;//如果指令未定义，则将其视为nop
///////////////////////		Exception part
endmodule
