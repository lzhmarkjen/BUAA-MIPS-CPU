`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
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
	
	wire [1:0] MemtoReg;
	wire [2:0] ReadBE;
	wire [31:0] RD4out;
	
	WriteBack_Controller WC(
	.Instr4(Instr4),
	.MemtoReg(MemtoReg),
	.RegWrite(RegWrite),
	.ReadBE(ReadBE)
	);
/////////////////////////	Controller
	WB_Ext wb_ext(
	._byte(Result4[1:0]),
	.RD4in(RD4),
	.ReadBE(ReadBE),
	.RD4out(RD4out)
	);
////////////////////////		lw,lb,lhu指令的区别：不同的扩展方式，放在W级据说是因为M级本来就慢就不要再加模块拖慢速度了，匀一点到W级
	MemtoRegmux MemtoRegmux(
	.MemtoReg(MemtoReg),
	.Result(Result4),
	.RD(RD4out),
	.PC(PC4),
	.WD(WD)
	);
//////////////////////		Mux
endmodule
