`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:08:00 11/24/2018 
// Design Name: 
// Module Name:    Transpond 
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
module Transpond_Controller(
	input [31:0] Instr1,
	input [31:0] Instr2,
	input [31:0] Instr3,
	input [31:0] Instr4,
	output [1:0] ForwardRSD,
	output [1:0] ForwardRTD,
	output [1:0] ForwardRSE,
	output [1:0] ForwardRTE,
	output ForwardRTM
    );
	
	wire cal_irls_E,cal_r_E,cal_r_M,cal_i_M,cal_r_W,cal_i_W;
	assign cal_r_E = 
		(Instr2[`op]==6'b000000 & Instr2[`func]==6'b100001)|
		(Instr2[`op]==6'b000000 & Instr2[`func]==6'b100011);
	assign cal_irls_E = 
		(Instr2[`op]==6'b001101)|
		(Instr2[`op]==6'b001111)|
		(Instr2[`op]==6'b000000 & Instr2[`func]==6'b100001)|
		(Instr2[`op]==6'b000000 & Instr2[`func]==6'b100011)|
		(Instr2[`op]==6'b100011)|
		(Instr2[`op]==6'b101011);
	assign cal_r_M = 
		(Instr3[`op]==6'b000000 & Instr3[`func]==6'b100001)|
		(Instr3[`op]==6'b000000 & Instr3[`func]==6'b100011);
	assign cal_i_M = 
		(Instr3[`op]==6'b001101)|
		(Instr3[`op]==6'b001111); 
	assign cal_r_W = 
		(Instr4[`op]==6'b000000 & Instr4[`func]==6'b100001)|
		(Instr4[`op]==6'b000000 & Instr4[`func]==6'b100011);
	assign cal_i_W = 
		(Instr4[`op]==6'b001101)|
		(Instr4[`op]==6'b001111); 
//////////////////////////////////////
	assign ForwardRSD = 
		Instr1[`op]==6'b000100 & cal_i_M & Instr1[`rs]==Instr3[`rt] ? 2'b01:
		Instr1[`op]==6'b000100 & cal_r_M & Instr1[`rs]==Instr3[`rd] ? 2'b01:
		Instr1[`op]==6'b000100 & cal_i_W & Instr1[`rs]==Instr4[`rt] ? 2'b10:
		Instr1[`op]==6'b000100 & cal_r_W & Instr1[`rs]==Instr4[`rd] ? 2'b10:
		Instr1[`op]==6'b000100 & Instr4[`op]==6'b100011 & Instr1[`rs]==Instr4[`rt] ? 2'b10:
		Instr1[`op]==6'b000100 & Instr4[`op]==6'b000011 & Instr1[`rs]==5'b11111    ? 2'b10:
		2'b0;
		
	assign ForwardRTD = 
		Instr1[`op]==6'b000100 & cal_i_M & Instr1[`rt]==Instr3[`rt] ? 2'b01:
		Instr1[`op]==6'b000100 & cal_r_M & Instr1[`rt]==Instr3[`rd] ? 2'b01:
		Instr1[`op]==6'b000100 & cal_i_W & Instr1[`rt]==Instr4[`rt] ? 2'b10:
		Instr1[`op]==6'b000100 & cal_r_W & Instr1[`rt]==Instr4[`rd] ? 2'b10:
		Instr1[`op]==6'b000100 & Instr4[`op]==6'b100011 & Instr1[`rt]==Instr4[`rt] ? 2'b10:
		Instr1[`op]==6'b000100 & Instr4[`op]==6'b000011 & Instr1[`rt]==5'b11111    ? 2'b10:
		2'b0;
	
	assign ForwardRSE = 
		cal_irls_E & cal_i_M & Instr2[`rs]==Instr3[`rt] ? 2'b01:
		cal_irls_E & cal_r_M & Instr2[`rs]==Instr3[`rd] ? 2'b01:
		cal_irls_E & cal_i_W & Instr2[`rs]==Instr4[`rt] ? 2'b10:
		cal_irls_E & cal_r_W & Instr2[`rs]==Instr4[`rd] ? 2'b10:
		cal_irls_E & Instr4[`op]==6'b100011 & Instr2[`rs]==Instr4[`rt] ? 2'b10:
		cal_irls_E & Instr4[`op]==6'b000011 & Instr2[`rs]==5'b11111    ? 2'b10:
		2'b0;
	
	assign ForwardRTE = 
		cal_r_E & cal_i_M & Instr2[`rt]==Instr3[`rt] ? 2'b01:
		cal_r_E & cal_r_M & Instr2[`rt]==Instr3[`rd] ? 2'b01:
		cal_r_E & cal_i_W & Instr2[`rt]==Instr4[`rt] ? 2'b10:
		cal_r_E & cal_r_W & Instr2[`rt]==Instr4[`rd] ? 2'b10:
		cal_r_E & Instr4[`op]==6'b100011 & Instr2[`rt]==Instr4[`rt] ? 2'b10:
		cal_r_E & Instr4[`op]==6'b000011 & Instr2[`rt]==5'b11111    ? 2'b10:
		Instr2[`op]==6'b101011 & cal_i_M & Instr2[`rt]==Instr3[`rt] ? 2'b01:
		Instr2[`op]==6'b101011 & cal_r_M & Instr2[`rt]==Instr3[`rd] ? 2'b01:
		Instr2[`op]==6'b101011 & cal_i_W & Instr2[`rt]==Instr4[`rt] ? 2'b10:
		Instr2[`op]==6'b101011 & cal_r_W & Instr2[`rt]==Instr4[`rd] ? 2'b10:
		Instr2[`op]==6'b101011 & Instr4[`op]==6'b100011 & Instr2[`rt]==Instr4[`rt] ? 2'b10:
		Instr2[`op]==6'b101011 & Instr4[`op]==6'b000011 & Instr2[`rt]==5'b11111    ? 2'b10:
		2'b0;
	
	assign ForwardRTM = 
		Instr3[`op]==6'b101011 & Instr4[`op]==6'b100011 & Instr3[`rt]==Instr4[`rt] ? 1'b1:
		Instr3[`op]==6'b101011 & Instr4[`op]==6'b000011 & Instr3[`rt]==5'b11111    ? 1'b1:
		//Instr3[`op]==6'b101011 & cal_i_W & Instr3[`rt]==Instr4[`rt] ? 1'b1:
		//Instr3[`op]==6'b101011 & cal_r_W & Instr3[`rt]==Instr4[`rd] ? 1'b1:
		1'b0;


endmodule
