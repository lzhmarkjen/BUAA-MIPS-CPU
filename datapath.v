`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
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
	input reset
	);
	
	wire [31:0]PC1,Instr1,PC2,Instr2,PC3,Instr3,PC4,Instr4;//0,1,2,3,4代表F,D,E,M,W级的指令和PC
	wire [31:0]WD,RD4,Result3,Result4;
	wire [31:0]A2,B2,B3,imm32_2,imm32_3;
	wire [31:0]PC_j,PC_jr,PC_beq;
	wire [4:0]WA3,WA4;
	wire [1:0]PCSel;
	wire PCWrtie,Zero3;
	wire RegWrite_E,RegWrite_M,RegWrite_W;
///////////////////数据通路线
	wire PC_En,IF_ID_En,ID_EX_Clr,IF_ID_Clr,Stall;
	assign PC_En = ~Stall;
	assign IF_ID_En = ~Stall;
	assign IF_ID_Clr=0;
	assign ID_EX_Clr = Stall;

	wire [1:0]ForwardRTD,ForwardRSD,ForwardRSE,ForwardRTE;
	wire ForwardRTM;
///////////////////		转发线
	Fetch fetch(//F级
	.clk(clk),
	.reset(reset),
	.PCSel(PCSel),
	.PC_j(PC_j),
	.PC_jr(PC_jr),
	.PC_beq(PC_beq),
	.IF_ID_En(IF_ID_En),
	.IF_ID_Clr(IF_ID_Clr),
	.PC_En(PC_En),//
	.PC1(PC1),
	.Instr1(Instr1)
	);
	
	Decode decode(//D级
	.Instr1(Instr1),
	.PC1(PC1),
	.clk(clk),
	.reset(reset),
	.WA4(WA4),
	.RegWrite(RegWrite_W),
	.ID_EX_Clr(ID_EX_Clr),
	.PC4(PC4),
	.WD(WD),
	.ForwardRSD(ForwardRSD),
	.ForwardRTD(ForwardRTD),
	.Result3(Result3),//
	.PC2(PC2),
	.Instr2(Instr2),
	.A2(A2),
	.B2(B2),
	.imm32_2(imm32_2),
	.PCSel(PCSel),
	.PC_j(PC_j),
	.PC_jr(PC_jr),
	.PC_beq(PC_beq)
	);
	
	Execution execution(//E级
	.PC2(PC2),
	.A2in(A2),
	.B2in(B2),
	.imm32_2(imm32_2),
	.Instr2(Instr2),
	.clk(clk),
	.reset(reset),
	.Result3in(Result3),
	.ForwardRSE(ForwardRSE),
	.ForwardRTE(ForwardRTE),
	.WD(WD),//Transpond
	.PC3(PC3),
	.Result3(Result3),
	.B3(B3),
	.Instr3(Instr3),
	.WA3(WA3),
	.imm32_3(imm32_3)
	);
	
	Memory memory(//M级
	.PC3(PC3),
	.Result3(Result3),
	.B3(B3),
	.Instr3(Instr3),
	.WA3(WA3),
	.imm32_3(imm32_3),
	.clk(clk),
	.reset(reset),
	.WD(WD),//Transpond
	.ForwardRTM(ForwardRTM),//Transpond
	.RD4(RD4),
	.Result4(Result4),
	.WA4(WA4),
	.PC4(PC4),
	.Instr4(Instr4)
	);
	
	WriteBack writeback(//W级（没有寄存器）
	.PC4(PC4),
	.Instr4(Instr4),
	.Result4(Result4),
	.RD4(RD4),//
	.RegWrite(RegWrite_W),
	.WD(WD)
	);
//////////////////////	module
Hazard Hazard (//转发暂停模块
    .clk(clk), 
    .reset(reset), 
    .Instr1(Instr1), 
    .Instr2(Instr2), 
    .Instr3(Instr3), 
    .Instr4(Instr4), 
    .Stall(Stall), 
    .ForwardRSD(ForwardRSD), 
    .ForwardRTD(ForwardRTD), 
    .ForwardRSE(ForwardRSE), 
    .ForwardRTE(ForwardRTE), 
    .ForwardRTM(ForwardRTM)
    );
	/*Stall_Controller SC(
	.Instr1(Instr1),
	.Instr2(Instr2),
	.Instr3(Instr3),
	.Instr4(Instr4),
	.Stall(Stall)
	);
	Transpond_Controller TC(
	.Instr1(Instr1),
	.Instr2(Instr2),
	.Instr3(Instr3),
	.Instr4(Instr4),
	.ForwardRTD(ForwardRTD),
	.ForwardRSD(ForwardRSD),
	.ForwardRSE(ForwardRSE),
	.ForwardRTE(ForwardRTE),
	.ForwardRTM(ForwardRTM)
	);*/
/////////////////////	pipeline controller
endmodule
