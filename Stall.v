`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:54:42 11/26/2018 
// Design Name: 
// Module Name:    Stall 
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
module Stall_Controller(
    input [31:0] Instr1,
    input [31:0] Instr2,
    input [31:0] Instr3,
	 input [31:0] Instr4,
    output Stall
    );
	
	wire addu_D,subu_D,ori_D,lw_D,sw_D,beq_D,lui_D,j_D,jr_D;
	wire addu_E,subu_E,ori_E,lw_E,lui_E;
	wire lw_M;
	assign addu_D = Instr1[`op]==6'b000000 & Instr1[`func]==6'b100001;
	assign subu_D = Instr1[`op]==6'b000000 & Instr1[`func]==6'b100011;
	assign ori_D  = Instr1[`op]==6'b001101;
	assign lui_D  = Instr1[`op]==6'b001111;
	assign lw_D   = Instr1[`op]==6'b100011;
	assign sw_D   = Instr1[`op]==6'b101011;
	assign beq_D  = Instr1[`op]==6'b000100;
	assign jr_D   = Instr1[`op]==6'b000000 & Instr1[`func]==6'b001000;
	
	assign addu_E = Instr2[`op]==6'b000000 & Instr2[`func]==6'b100001;
	assign subu_E = Instr2[`op]==6'b000000 & Instr2[`func]==6'b100011;
	assign ori_E  = Instr2[`op]==6'b001101;
	assign lui_E  = Instr2[`op]==6'b001111;
	assign lw_E   = Instr2[`op]==6'b100011;
	assign sw_E   = Instr2[`op]==6'b101011;
	assign beq_E  = Instr2[`op]==6'b000100;
	assign jr_E   = Instr2[`op]==6'b000000 & Instr2[`func]==6'b001000;
	
	assign addu_M = Instr3[`op]==6'b000000 & Instr3[`func]==6'b100001;
	assign subu_M = Instr3[`op]==6'b000000 & Instr3[`func]==6'b100011;
	assign ori_M  = Instr3[`op]==6'b001101;
	assign lui_M  = Instr3[`op]==6'b001111;
	assign lw_M   = Instr3[`op]==6'b100011;
	assign sw_M   = Instr3[`op]==6'b101011;
	assign beq_M  = Instr3[`op]==6'b000100;
	assign jr_M   = Instr3[`op]==6'b000000 & Instr3[`func]==6'b001000;
	
	assign addu_W = Instr4[`op]==6'b000000 & Instr4[`func]==6'b100001;
	assign subu_W = Instr4[`op]==6'b000000 & Instr4[`func]==6'b100011;
	assign ori_W  = Instr4[`op]==6'b001101;
	assign lui_W  = Instr4[`op]==6'b001111;
	assign lw_W   = Instr4[`op]==6'b100011;
	assign sw_W   = Instr4[`op]==6'b101011;
	assign beq_W  = Instr4[`op]==6'b000100;
	assign jr_W   = Instr4[`op]==6'b000000 & Instr4[`func]==6'b001000;

	wire cal_r_D,cal_i_D;
	
	assign cal_r_D = addu_D | subu_D;
	assign cal_i_D = ori_D  | lui_D;
	assign b_D     = beq_D;
	assign jr_D    = jr_D;
	assign load_D  = lw_D;
	assign store_D = sw_D;
	
	assign cal_r_E = addu_E | subu_E;
	assign cal_i_E = ori_E  | lui_E;
	assign b_E     = beq_E;
	assign jr_E    = jr_E;
	assign load_E  = lw_E;
	assign store_E = sw_E;
	
	assign cal_r_M = addu_M | subu_M;
	assign cal_i_M = ori_M  | lui_M;
	assign b_M     = beq_M;
	assign jr_M    = jr_M;
	assign load_M  = lw_M;
	assign store_M = sw_M;
	
	assign cal_r_W = addu_W | subu_W;
	assign cal_i_W = ori_W  | lui_W;
	assign b_W     = beq_W;
	assign jr_W    = jr_W;
	assign load_W  = lw_W;
	assign store_W = sw_W;
//////////////////////////////////////////////////////
	wire stall_b,stall_cal_r,stall_cal_i,stall_load,stall_store,stall_jr;
	assign stall_b = Instr1[`op]==6'b000100 &
						((cal_r_E 					 & ((Instr2[`rd]==Instr1[`rs])|(Instr2[`rd]==Instr1[`rt])))|
						 (cal_i_E 					 & ((Instr2[`rt]==Instr1[`rs])|(Instr2[`rt]==Instr1[`rt])))|
						 (Instr2[`op]==6'b100011 & ((Instr2[`rt]==Instr1[`rs])|(Instr2[`rt]==Instr1[`rt])))|
						 (Instr3[`op]==6'b100011 & ((Instr3[`rt]==Instr1[`rs])|(Instr3[`rt]==Instr1[`rt])))|
						 (Instr2[`op]==6'b000011 & ((Instr1[`rs]==5'b11111)|(Instr1[`rt]==5'b11111)))|
						 (Instr3[`op]==6'b000011 & ((Instr1[`rs]==5'b11111)|(Instr1[`rt]==5'b11111))));
						 
	assign stall_cal_r = (cal_r_D & Instr2[`op]==6'b100011 & ((Instr2[`rt]==Instr1[`rs])|(Instr2[`rt]==Instr1[`rt])))|
								(cal_r_D & Instr2[`op]==6'b000011 & ((Instr1[`rs]==5'b11111)|(Instr1[`rt]==5'b11111)));
	
	assign stall_cal_i = (cal_i_D & Instr2[`op]==6'b100011 & (Instr2[`rt]==Instr1[`rs]))|
								(cal_i_D & Instr2[`op]==6'b000011 & (Instr1[`rs]==5'b11111));
	
	assign stall_load  = (Instr1[`op]==6'b100011 & Instr2[`op]==6'b100011 & (Instr2[`rt]==Instr1[`rs]))|
								(Instr1[`op]==6'b100011 & Instr2[`op]==6'b000011 & (Instr1[`rs]==5'b11111));
	
	//assign stall_store = (Instr1[`op]==6'b101011 & Instr2[`op]==6'b100011 & (Instr2[`rt]==Instr1[`rs]))|
								//(Instr1[`op]==6'b101011 & Instr2[`op]==6'b000011 & (Instr1[`rs]==5'b11111));
	assign stall_store = 0;
	
	assign stall_jr = (Instr1[`op]==6'b000000 & Instr1[`func]==6'b001000) & 
						  ((cal_r_E & Instr2[`rd]==Instr1[`rs]) |
							(cal_i_E & Instr2[`rt]==Instr1[`rs]) |
							(Instr2[`op]==6'b100011 & (Instr2[`rt]==Instr1[`rs]))|
							(cal_r_M & Instr3[`rd]==Instr1[`rs]) |
							(cal_i_M & Instr3[`rt]==Instr1[`rs]) |
							(Instr3[`op]==6'b100011 & (Instr3[`rt]==Instr1[`rs]))|
							(cal_r_W & Instr4[`rd]==Instr1[`rs]) |
							(cal_i_W & Instr4[`rt]==Instr1[`rs]) |
							(Instr4[`op]==6'b100011 & (Instr4[`rt]==Instr1[`rs])));//将jr写成暂停 可改成转发提高效率
////////////////////////////
	assign Stall = stall_b | stall_cal_r | stall_cal_i | stall_load | stall_store | stall_jr;

endmodule
