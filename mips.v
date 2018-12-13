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
    input reset,
	 output [31:0] PrAddr,
	 output [3:0] PrBE,
	 output [31:0] PrWD,
	 output [31:0] PrRD,
	 //input [31:0] PrRD
	 output PrWe,
	 input [7:2] HWInt
	 
    );
	
	assign PrAddr = Result3;
	assign PrWD = WData;
	assign PrRD  = WD;
//////////////////////////////////////////////////
	wire [31:0]PC1,Instr1,PC2,Instr2,PC3,Instr3,PC4,Instr4;
	wire [31:0]WD,RD4,Result3,Result4;
	wire [31:0]A2,B2,B3,imm32_2,imm32_3;
	wire [31:0]PC_j,PC_jr,PC_beq;
	wire [4:0]WA3,WA4;
	wire [31:0]WData;
	wire [1:0]PCSel;
	wire RegWrite_W;
/////////////////////////////////////////////////
	wire PC_En,IF_ID_En,ID_EX_Clr,IF_ID_Clr,Stall;
	assign PC_En = ~Stall;
	assign IF_ID_En = ~Stall;
	assign IF_ID_Clr=0;
	assign ID_EX_Clr = Stall;

	wire [1:0]ForwardRTD,ForwardRSD,ForwardRSE,ForwardRTE;
	wire ForwardRTM;
	
	wire Start2;
	wire Busy;
/////////////////////////////////////////////		Transpond Wire
	Fetch fetch(
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
	
	Decode decode(
	.Instr1(Instr1),
	.PC1(PC1),
	.clk(clk),
	.reset(reset),
	.WA4(WA4),
	.RegWrite(RegWrite_W),
	.ID_EX_Clr(ID_EX_Clr),
	.PC4(PC4),
	.WD(WD),//Transpond
	.ForwardRSD(ForwardRSD),
	.ForwardRTD(ForwardRTD),
	.Result3(Result3),//Transpond
	.PC2(PC2),
	.Instr2(Instr2),
	.A2(A2),
	.B2(B2),
	.imm32_2(imm32_2),
	.PCSel(PCSel),
	.PC_j(PC_j),
	.PC_jr(PC_jr),
	.PC_beq(PC_beq),
	.Start2(Start2)
	);
	
	Execution execution(
	.PC2(PC2),
	.A2in(A2),
	.B2in(B2),
	.imm32_2(imm32_2),
	.Instr2(Instr2),
	.clk(clk),
	.reset(reset),
	.Start(Start2),
	.Result3in(Result3),//Transpond
	.ForwardRSE(ForwardRSE),
	.ForwardRTE(ForwardRTE),
	.WD(WD),//Transpond
	.PC3(PC3),
	.Result3(Result3),
	.B3(B3),
	.Instr3(Instr3),
	.WA3(WA3),
	.imm32_3(imm32_3),
	.Busy(Busy)
	);
	
	Memory memory(
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
	.Instr4(Instr4),
	.WData(WData)
	);
	
	WriteBack writeback(
	.PC4(PC4),
	.Instr4(Instr4),
	.Result4(Result4),
	.RD4(RD4),//
	.RegWrite(RegWrite_W),
	.WD(WD)
	);
//////////////////////	module
	Hazard hazard (
    .clk(clk), 
    .reset(reset), 
    .Instr1(Instr1), 
    .Instr2(Instr2), 
    .Instr3(Instr3), 
    .Instr4(Instr4), 
	 .Busy(Busy),
	 .Start2(Start2),//
    .Stall(Stall), 
    .ForwardRSD(ForwardRSD), 
    .ForwardRTD(ForwardRTD), 
    .ForwardRSE(ForwardRSE), 
    .ForwardRTE(ForwardRTE), 
    .ForwardRTM(ForwardRTM)
    );
/////////////////////	pipeline controller
endmodule
