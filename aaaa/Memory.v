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
`define LB    (Op==6'b100000)
`define LBU   (Op==6'b100100)
`define LH    (Op==6'b100001)
`define LHU   (Op==6'b100101)
`define LW    (Op==6'b100011)
`define SB    (Op==6'b101000)
`define SH    (Op==6'b101001)
`define SW    (Op==6'b101011)
`define MFC0  (Op==6'b010000 & Instr3[25:21]==5'b00000)
///////////////////////////////////////////////////////
module Memory(
	input [31:0]PC3,
	input [31:0]Result3,
	input [31:0]B3,
	input [31:0]Instr3,
	input [4:0]WA3,
	input clk,
	input reset,
	input IntReq,
	input [31:0]imm32_3,//useless
	input [31:0]PrRD,
	input MEM_WB_En,
	input [31:0]WD,//Transpond
	input ForwardRTM,//Transpond
	output [31:0]RD4,
	output [31:0]Result4,
	output [4:0]WA4,
	output [31:0]PC4,
	output [31:0]Instr4,
	output [31:0]WData,
	output MemWrite,
	output MemRead,
	output ADEL,
	output ADES,
	input [31:0] DOut,
	output CP0WE,
	output [31:0] DOut4
    );
	
	wire [31:0]RD3in;
	wire [3:0]WriteBE;
	wire MemWriteold;
	
	wire range1,range2,WAisCOUNT;
	
	Memory_Controller MC(
	.Instr3(Instr3),
	.Addr(Result3[1:0]),
	.MemRead(MemRead),
	.MemWrite(MemWriteold),
	.WriteBE(WriteBE),
	.CP0WE(CP0WE)
	);
	
	assign MemWrite = MemWriteold & !ADEL & !ADES & !IntReq;//DM���쳣����д(�����Ͳ���дDM��)
	wire [4:0] WA3new = IntReq==0 ? WA3:5'b0;//�����ָ����дGRF,��Ϊ�ܺ�ָ��,��ĵ�ַΪ0(�����Ͳ�����д�Ĵ�����)
/////////////////////	Controller
	DM dm(
	.A(Result3[13:2]),
	.WData(WData),
	.clk(clk),
	.reset(reset),
	.MemRead(MemRead),
	.MemWrite(MemWrite & range1),//��range1��Χ��
	.PC(PC3),
	.WriteBE(WriteBE),//
	.RD(RD3in)
	);
	
	wire [31:0] RD3out = range2 & MemRead ? PrRD:
								`MFC0            ? DOut:
														RD3in;
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
	.RD3(RD3out),
	.Result3(Result3),
	.WA3(WA3new),
	.DOut3(DOut),
	.clk(clk),
	.reset(reset),//IntReq����
	.MEM_WB_En(MEM_WB_En),
	.PC4(PC4),
	.Instr4(Instr4),
	.RD4(RD4),
	.Result4(Result4),
	.WA4(WA4),
	.DOut4(DOut4)
	);
//////////////////////		Store
	wire [5:0] Op = Instr3[31:26];
	assign range1 = (Result3 >= 32'h0000 & Result3 <= 32'h2FFC);//һ���ڴ淶Χ
	assign range2 = (Result3 >= 32'h7F00 & Result3 <= 32'h7F0B) | (Result3 >= 32'h7F10 & Result3 <= 32'h7F1B);//��ʱ���ڴ淶Χ
	assign WAisCOUNT = Result3==32'h7F08 | Result3==32'h7F18;//��ʱ����COUNT�ĵ�ַ
	
	assign ADEL = (`LH | `LHU) & Result3[0:0]!=1'b0      ? 1'b1://����δ����
					  `LW & Result3[1:0]!=2'b00 		        ? 1'b1://��δ����
					  `LW & ~(range1 | range2) 			     ? 1'b1://lwԽ��
					  (`LH | `LHU | `LB | `LBU) & ~range1    ? 1'b1://lh,lbԽ��
																	       1'b0;
																		 
	assign ADES = `SH & Result3[0:0]!=1'b0  				  ? 1'b1://����δ����
					  `SW & Result3[1:0]!=2'b00 				  ? 1'b1://��δ����
					  (`SB | `SH | `SW) & ~(range1 | range2) ? 1'b1://storeԽ��
					  (`SB | `SH) & range2                   ? 1'b1://sh,sbд��ʱ��
					  (`SB | `SH | `SW) & WAisCOUNT          ? 1'b1://��ͼдCOUNT
																			 1'b0;
////////////////////////		Exception part
endmodule
