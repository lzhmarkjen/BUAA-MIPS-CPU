`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:04:49 11/17/2018 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	input clk,
	input reset,
	input [3:0]ALUCtrl,
	input [1:0]RegDst,
	input nPC_Sel,
	input [1:0]MemtoReg,
	input MemWrite,
	input MemRead,
	input ALUSrc,
	input RegWrite,
	input [1:0]ExtOp,
	input PCWrite,
	input PCSel,
	output [31:0]Instr
    );
	
	wire [31:0]PC0,imm32,WD,RD1,RD2,B,Result,RD,nPC;
	wire [4:0]WA;
	wire Zero;
	
	PC pc(
	.clk(clk),
	.reset(reset),
	.PCWrite(PCWrite),
	.PC0(PC0),
	.PCSrc(Zero&nPC_Sel),
	.offset(imm32),
	.nPC(nPC)
	);
	IM im(
	.PC0(PC0),
	.Instr(Instr)
	);
	GRF grf(
	.RA1(Instr[25:21]),
	.RA2(Instr[20:16]),
	.WA(WA),
	.WD(WD),
	.clk(clk),
	.reset(reset),
	.RegWrite(RegWrite),
	.RD1(RD1),
	.RD2(RD2),
	.PC0(PC0)
	);
	ALU alu(
	.A(RD1),
	.B(B),
	.ALUOp(ALUCtrl),
	.Result(Result),
	.Zero(Zero)
	);
	DM dm(
	.A(Result[11:2]),
	.WData(RD2),
	.clk(clk),
	.reset(reset),
	.MemRead(MemRead),
	.MemWrite(MemWrite),
	.RD(RD),
	.PC0(PC0)
	);
	EXT ext(
	.imm16(Instr[15:0]),
	.ExtOp(ExtOp),
	.imm32(imm32)
	);
	
	RegDstmux RegDstmux(
	.RegDst(RegDst),
	.Rt(Instr[20:16]),
	.Rd(Instr[15:11]),
	.WA(WA)
	);
	ALUSrcmux ALUSrcmux(
	.ALUSrc(ALUSrc),
	.RD2(RD2),
	.imm32(imm32),
	.B(B)
	);
	MemtoRegmux MemtoRegmux(
	.MemtoReg(MemtoReg),
	.Result(Result),
	.RD(RD),
	.PC0(PC0),
	.WD(WD)
	);
	PCSelmux PCSelmux(
	.PCSel(PCSel),
	.nPC_jal({PC0[31:28],Instr[25:0],2'b00}),
	.nPC_jr(WD),
	.nPC(nPC)
	);
endmodule
