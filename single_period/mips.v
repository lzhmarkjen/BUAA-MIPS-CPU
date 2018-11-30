`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:39 11/16/2018 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	
	wire [31:0]Instr;
	wire [3:0]ALUCtrl;
	wire [1:0]RegDst,MemtoReg,ExtOp;
	wire MemWrite,MemRead,ALUSrc,PCWrite,nPC_Sel,RegWrite,PCSel;
	
	datapath datapath (
    .clk(clk), 
    .reset(reset), 
    .ALUCtrl(ALUCtrl), 
    .RegDst(RegDst), 
    .nPC_Sel(nPC_Sel), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .ALUSrc(ALUSrc), 
    .RegWrite(RegWrite), 
    .ExtOp(ExtOp), 
    .PCWrite(PCWrite), 
    .PCSel(PCSel), 
    .Instr(Instr)
    );

	Controller control(
	.ALUCtrl(ALUCtrl),
	.RegDst(RegDst),
	.nPC_Sel(nPC_Sel),
	.MemtoReg(MemtoReg),
	.MemWrite(MemWrite),
	.MemRead(MemRead),
	.ALUSrc(ALUSrc),
	.RegWrite(RegWrite),
	.ExtOp(ExtOp),
	.PCWrite(PCWrite),
	.Instr(Instr),
	.PCSel(PCSel)
	);

endmodule
