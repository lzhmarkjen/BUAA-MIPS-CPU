`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
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
module Decode(
	input [31:0]Instr1,
	input [31:0]PC1,
	input clk,
	input reset,
	input [31:0]WD,
	input [4:0]WA4,
	input RegWrite,
	input ID_EX_Clr,
	input [31:0]PC4,
	input [1:0]ForwardRSD,//Transpond
	input [1:0]ForwardRTD,
	input [31:0]Result3,//Transpond
	output [31:0] PC2,
	output [31:0] Instr2,
	output [31:0] A2,
	output [31:0] B2,
	output [31:0] imm32_2,
	output [1:0] PCSel,
	output [31:0] PC_j,
	output [31:0] PC_jr,
	output [31:0] PC_beq,
	output Start2
    );
	
	wire [31:0]imm32,RD1,RD2;
	wire [1:0]ExtOp;
	wire [31:0]A1,B1;
	wire Start1;
	
	wire RD_AEqualB = (A1 == B1);
	wire RD_ASmall0 = (($signed(A1) < 0));
	wire RD_AEqual0 = (A1 == 0);
/////////////////		Comparater

	assign PC_j = {PC1[31:28],Instr1[25:0],2'b00};
	assign PC_jr = A1;
	assign PC_beq = PC1 + 4 + imm32;
//////////////////	PC Calculate
	Decode_Controller DC(
	.RD_AEqualB(RD_AEqualB),
	.RD_ASmall0(RD_ASmall0),
	.RD_AEqual0(RD_AEqual0),
	.Instr1(Instr1),//
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
	.reset(reset|ID_EX_Clr),
	.imm32_1(imm32),
	.A1(A1),
	.B1(B1),
	.Start1(Start1),//
	.PC2(PC2),
	.Instr2(Instr2),
	.imm32_2(imm32_2),
	.A2(A2),
	.B2(B2),
	.Start2(Start2)
	);
//////////////////	Store
endmodule
