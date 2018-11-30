`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:11:55 11/24/2018 
// Design Name: 
// Module Name:    WB 
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
module WriteBack(
	input [31:0]PC4,
	input [31:0]Instr4,
	input [31:0]Result4,
	input [31:0]RD4,
	output RegWrite,
	output [31:0]WD
    );
	
	wire [1:0]MemtoReg;
	
	WriteBack_Controller WC(
	.Instr4(Instr4),
	.MemtoReg(MemtoReg),
	.RegWrite(RegWrite)
	);
//////////////////////		Controller
	MemtoRegmux MemtoRegmux(
	.MemtoReg(MemtoReg),
	.Result(Result4),
	.RD(RD4),
	.PC(PC4),
	.WD(WD)
	);
//////////////////////		Mux
endmodule
