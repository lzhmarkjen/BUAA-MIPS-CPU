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
module cpu(
    input clk,
    input reset,
	 input [7:2]HWInt,
	 output [31:0] PrAddr,
	 //output [3:0] PrBE,//##############
	 output [31:0] PrWD,
	 //output [31:0] PrRD,
	 input [31:0] PrRD,
	 output PrWe	 
    );
	 
	wire range2 = (Result3 >= 32'h7F00 & Result3 <= 32'h7F0B) | (Result3 >= 32'h7F10 & Result3 <= 32'h7F1B);//计时器内存范围
	
	assign PrAddr = range2 ? Result3:32'b0;
	assign PrWD   = WData;
	assign PrWe   = MemWrite & range2;

//////////////////////////////////////////////////
	wire [31:0]PC0,PC1,Instr1,PC2,Instr2,PC3,Instr3,PC4,Instr4;
	wire [31:0]WD,RD4,Result3,Result4;
	wire [31:0]A2,B2,B3,imm32_2,imm32_3;
	wire [31:0]PC_j,PC_jr,PC_beq;
	wire [4:0]WA3,WA4;
	wire [31:0]WData;
	wire [2:0]PCSel;
	wire RegWrite_W,MemWrite;
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
	wire PC_Exc,RI,Ov;
	wire ADEL_E,ADES_E,ADEL_M,ADES_M;
	wire [4:0]ExcCode;
	wire eret_reset;
	wire IntReq;
	wire [31:0] EPC;
/////////////////////////////////////////////		Exception Wire
	wire [31:0] Din,DOut3,DOut4;
	wire MEM_WB_En;
	wire Rollback;
/////////////////////////////////////////////		CP0 Wire
	Fetch fetch(
	.clk(clk),
	.reset(reset),
	.PCSel(PCSel),
	.PC_j(PC_j),
	.PC_jr(PC_jr),
	.PC_beq(PC_beq),
	.IF_ID_En(IF_ID_En),
	.IF_ID_Clr(IF_ID_Clr | IntReq),
	.PC_En(PC_En),
	.EPC(EPC),
	.IntReq(IntReq),//
	.PC0(PC0),
	.PC1(PC1),
	.Instr1(Instr1),
	.PC_Exc(PC_Exc)
	);
	
	Decode decode(
	.Instr1old(Instr1),
	.PC1(PC1),
	.clk(clk),
	.reset(reset),
	.WA4(WA4),
	.RegWrite(RegWrite_W),
	.ID_EX_Clr(ID_EX_Clr | eret_reset),
	.PC4(PC4),
	.IntReq(IntReq),
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
	.Start2(Start2),
	.RI(RI)
	);
	
	Execution execution(
	.PC2(PC2),
	.A2in(A2),
	.B2in(B2),
	.imm32_2(imm32_2),
	.Instr2(Instr2),
	.clk(clk),
	.reset(reset),
	.IntReq(IntReq),
	.Rollback(Rollback),
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
	.Busy(Busy),
	.Ov(Ov),
	.ADEL(ADEL_E),
	.ADES(ADES_E),
	.eret_reset(eret_reset)//output if E is eret
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
	.IntReq(IntReq),
	.WD(WD),
	.MEM_WB_En(MEM_WB_En),
	.PrRD(PrRD),//Transpond
	.ForwardRTM(ForwardRTM),//Transpond
	.RD4(RD4),
	.Result4(Result4),
	.WA4(WA4),
	.PC4(PC4),
	.Instr4(Instr4),
	.WData(WData),
	.MemWrite(MemWrite),
	.MemRead(MemRead),
	.ADEL(ADEL_M),
	.ADES(ADES_M),
	.DOut(DOut3),
	.CP0WE(CP0WE),
	.DOut4(DOut4)
	);
	
	WriteBack writeback(
	.PC4(PC4),
	.Instr4(Instr4),
	.Result4(Result4),
	.RD4(RD4),
	.DOut(DOut4),//
	.RegWrite(RegWrite_W),
	.WD(WD)
	);
//////////////////////	module
	Hazard hazard ( 
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
	Exception Exception(
	.clk(clk),
	.reset(reset),
	.PC_Exc(PC_Exc),
	.RI(RI),
	.Ov(Ov),	
	.AdEL_E(ADEL_E),
	.AdES_E(ADES_E),//E级的存取数异常明显是因为地址溢出
	.AdEL_M(ADEL_M),
	.AdES_M(ADES_M),//M级存取数异常是因为地址不合法
	.PC0(PC0), 
	.PC1(PC1), 
   .PC2(PC2), 
   .PC3(PC3), 
   .PC4(PC4),
	.ExcCode(ExcCode)
	);
///////////////////////		Exception controller
	 Coprocessor0 Cp0(
    .ARead(Instr3[15:11]),
    .AWrite(Instr3[15:11]),
    .Din(WData), 
    .PC(PC3), 
    .ExcCodein(ExcCode), 
    .HWInt(HWInt), 
    .CP0WE(CP0WE), 
    .EXLSet(EXLSet), 
    .EXLClr(eret_reset), 
    .clk(clk), 
    .reset(reset),
	 .Instr3(Instr3),
	 .Instr4(Instr4),//
    .IntReq(IntReq), 
    .EPCout(EPC), 
    .DOut(DOut3),
	 .MEM_WB_En(MEM_WB_En),
	 .Rollback(Rollback)
    );
//////////////////////////////////////  Coprocessor0
endmodule
