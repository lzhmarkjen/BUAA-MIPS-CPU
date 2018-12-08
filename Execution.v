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
module Execution(
	input [31:0]PC2,
	input [31:0]A2in,
	input [31:0]B2in,
	input [31:0]imm32_2,
	input [31:0]Instr2,
	input clk,
	input reset,
	input [31:0]Result3in,//Transpond
	input [1:0]ForwardRSE,
	input [1:0]ForwardRTE,
	input [31:0]WD,//Transpond
	output [31:0]PC3,
	output [31:0]Result3,
	output [31:0]B3,
	output [31:0]Instr3,
	output [4:0]WA3,
	output [31:0]imm32_3
    );
	
	wire [31:0]Result2in,A,B,B2,Result2out;
	wire ALUSrc;
	wire [3:0]ALUOp;
	wire [1:0]RegDst;
	wire [4:0]WA2;
	
	wire Start,Busy;
	wire [31:0]HILO;
	wire ALUMultSel;
	
	Execution_Controller EC(
	.Instr2(Instr2),
	.ALUOp(ALUOp),
	.ALUSrc(ALUSrc),
	.RegDst(RegDst),
	.ALUMultSel(ALUMultSel)
	);
/////////////////		Controller
	ALU alu(
	.A(A),
	.B(B),
	.ALUOp(ALUOp),
	.shift_offset(Instr2[10:6]),
	.Result(Result2in)
	);
//////////////////	ALU
	MultModule MultModule(
	.clk(clk),
	.reset(reset),
	.Instr2(Instr2),
	.A(A),
	.B2(B2),
	.Start(Start),
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
	
	ALUMultmux ALUMultmux(
	.Result2(Result2in),
	.HILO(HILO),
	.ALUMultSel(ALUMultSel),
	.Result2out(Result2out)
	);
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
	.reset(reset),
	.imm32_2(imm32_2),//
	.PC3(PC3),
	.Instr3(Instr3),
	.Result3(Result3),
	.B3(B3),
	.WA3(WA3),
	.imm32_3(imm32_3)
	);
//////////////////	Store
endmodule
