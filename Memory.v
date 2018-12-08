`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:09 11/23/2018 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
	input [31:0]PC3,
	input [31:0]Result3,
	input [31:0]B3,
	input [31:0]Instr3,
	input [4:0]WA3,
	input clk,
	input reset,
	input [31:0]imm32_3,//useless
	input [31:0]WD,//Transpond
	input ForwardRTM,//Transpond
	output [31:0]RD4,
	output [31:0]Result4,
	output [4:0]WA4,
	output [31:0]PC4,
	output [31:0]Instr4
    );
	
	wire MemRead,MemWrite;
	wire [31:0]RD3,WData;
	wire [3:0]WriteBE;
	
	Memory_Controller MC(
	.Instr3(Instr3),
	.Addr(Result3[1:0]),
	.MemRead(MemRead),
	.MemWrite(MemWrite),
	.WriteBE(WriteBE)
	);
/////////////////////	Controller
	DM dm(
	.A(Result3[13:2]),
	.WData(WData),
	.clk(clk),
	.reset(reset),
	.MemRead(MemRead),
	.MemWrite(MemWrite),
	.PC(PC3),
	.WriteBE(WriteBE),//
	.RD(RD3)
	);
//////////////////////	DM
	MFRTM mfrtm(
	.ForwardRTM(ForwardRTM),
	.B3(B3),
	.WD(WD),
	.WData(WData)
	);
/////////////////////	Transpond Mux
	MEM_WB mem_wb(
	.PC3(PC3),
	.Instr3(Instr3),
	.RD3(RD3),
	.Result3(Result3),
	.WA3(WA3),
	.clk(clk),
	.reset(reset),//
	.PC4(PC4),
	.Instr4(Instr4),
	.RD4(RD4),
	.Result4(Result4),
	.WA4(WA4)
	);
//////////////////////		Store
endmodule
