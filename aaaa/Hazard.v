`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:31 11/29/2018 
// Design Name: 
// Module Name:    Controller 
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
`define op 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define func 5:0
`define ALU 2'b01
`define DM  2'b10
module Hazard(
    input clk,
	 input reset,
	 input [31:0]Instr1,
	 input [31:0]Instr2,
	 input [31:0]Instr3,
	 input [31:0]Instr4,
	 input Busy,
	 input Start2,
	 output Stall,
	 output [1:0] ForwardRSD,
	 output [1:0] ForwardRTD,
	 output [1:0] ForwardRSE,
	 output [1:0] ForwardRTE,
	 output ForwardRTM
	 );
	wire cal_r_D,cal_i_D,branch_D,load_D,store_D,jr_D,link_D,RegWrite_D,mt_D,mult_D;
	wire cal_r_E,cal_i_E,branch_E,load_E,store_E,jr_E,link_E,RegWrite_E;
	wire cal_r_M,cal_i_M,branch_M,load_M,store_M,jr_M,link_M,RegWrite_M;
	wire cal_r_W,cal_i_W,branch_W,load_W,store_W,jr_W,link_W,RegWrite_W;
	wire [4:0]WA_D,WA_E,WA_M,WA_W;
	wire [1:0]Res_D,Res_E,Res_M,Res_W;
	
	InstrCoder Coder_D (Instr1,cal_r_D,cal_i_D,branch_D,load_D,store_D,jr_D,link_D,RegWrite_D,WA_D,Res_D,mt_D,mult_D);
	InstrCoder Coder_E (Instr2,cal_r_E,cal_i_E,branch_E,load_E,store_E,jr_E,link_E,RegWrite_E,WA_E,Res_E);
	InstrCoder Coder_M (Instr3,cal_r_M,cal_i_M,branch_M,load_M,store_M,jr_M,link_M,RegWrite_M,WA_M,Res_M);
	InstrCoder Coder_W (Instr4,cal_r_W,cal_i_W,branch_W,load_W,store_W,jr_W,link_W,RegWrite_W,WA_W,Res_W);
//////////翻译指令成类型

	wire Tuse_rs0 = branch_D | jr_D;//rs的Tuse为0
	wire Tuse_rs1 = cal_r_D | cal_i_D | load_D | store_D | mt_D | mult_D;//rs的Tuse为1
	wire Tuse_rt0 = branch_D;//rt的Tuse为0
	wire Tuse_rt1 = cal_r_D | mult_D;//rt的Tuse为1
	
	assign Stall_rs = Tuse_rs0 & Res_E==`ALU & Instr1[`rs]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://D E冲突 需要ALU结果
							Tuse_rs0 & Res_E==`DM  & Instr1[`rs]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://D E冲突 需要DM结果
							Tuse_rs0 & Res_M==`DM  & Instr1[`rs]==WA_M & WA_M!=5'b0 & RegWrite_M ? 1'b1://D M冲突 需要DM结果
							Tuse_rs1 & Res_E==`DM  & Instr1[`rs]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://E M冲突 需要DM结果
																														  1'b0;
	assign Stall_rt = Tuse_rt0 & Res_E==`ALU & Instr1[`rt]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://D E冲突 需要ALU结果
							Tuse_rt0 & Res_E==`DM  & Instr1[`rt]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://D E冲突 需要DM结果
							Tuse_rt0 & Res_M==`DM  & Instr1[`rt]==WA_M & WA_M!=5'b0 & RegWrite_M ? 1'b1://D M冲突 需要DM结果
							Tuse_rt1 & Res_E==`DM  & Instr1[`rt]==WA_E & WA_E!=5'b0 & RegWrite_E ? 1'b1://E M冲突 需要DM结果
																														  1'b0;
	assign Stall = Stall_rs | Stall_rt | Start2 | Busy;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	assign ForwardRSD = Instr1[`rs]==WA_M & WA_M!=5'b0 & RegWrite_M & Res_M==`ALU ? 2'd1:2'd0;//修改了GRF使得W级和D级的冲突取消
	assign ForwardRTD = Instr1[`rt]==WA_M & WA_M!=5'b0 & RegWrite_M & Res_M==`ALU ? 2'd1:2'd0;
	assign ForwardRSE = Instr2[`rs]==WA_M & WA_M!=5'b0 & RegWrite_M & Res_M==`ALU ? 2'd1:
							  Instr2[`rs]==WA_W & WA_W!=5'b0 & RegWrite_W & Res_W==`DM  ? 2'd2:
																											  2'd0;
	assign ForwardRTE = Instr2[`rt]==WA_M & WA_M!=5'b0 & RegWrite_M & Res_M==`ALU ? 2'd1:
							  Instr2[`rt]==WA_W & WA_W!=5'b0 & RegWrite_W & Res_W==`DM  ? 2'd2:
																											  2'd0;
	assign ForwardRTM = Instr3[`rt]==WA_W & WA_W!=5'b0 & RegWrite_W & Res_W==`DM  ? 1'b1:
																											  1'b0;
endmodule
