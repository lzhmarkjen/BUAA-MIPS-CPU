`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:42:21 11/29/2018 
// Design Name: 
// Module Name:    InstrCoder 
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
`define PC  2'b11
module InstrCoder(
    input [31:0] Instr,
	 output cal_r,
	 output cal_i,
	 output branch,
	 output load,
	 output store,
	 output jr,
	 output link,
	 output RegWrite,
	 output [4:0]WA,
	 output MemRead,
	 output [1:0]Res
    );
/////////////////////////////////////////////
	wire addu = Instr[`op]==6'b000000 & Instr[`func]==6'b100001;
	wire subu = Instr[`op]==6'b000000 & Instr[`func]==6'b100011;
	wire ori  = Instr[`op]==6'b001101;
	wire lui  = Instr[`op]==6'b001111;
	wire lw   = Instr[`op]==6'b100011;
	wire sw   = Instr[`op]==6'b101011;
	wire beq  = Instr[`op]==6'b000100;
	wire _jr  = Instr[`op]==6'b000000 & Instr[`func]==6'b001000;
	wire jal  = Instr[`op]==6'b000011;
	wire _jalr = Instr[`op]==6'b000000 & Instr[`func]==6'b001001;
	//wire fucking cpu = ......
	//add instr here
////////////////////////////////////////////////////////
	assign cal_r = addu | subu;
	assign cal_i = ori  | lui;
	assign branch= beq;
	assign load  = lw;
	assign store = sw;
	assign jr    = _jr | _jalr;
	assign link  = jal;
	assign jalr  = _jalr;
/////////////////////////////////////////////////////////////////////////////
	assign RegWrite = cal_r | cal_i | load | link | jalr;
	
	assign WA = (cal_r|jalr) ? Instr[`rd]:
					(cal_i|load) ? Instr[`rt]:
					link			 ?	5'b11111  :
												5'b0;

	assign MemRead  = load ? 1'b1:1'b0;
	
	assign Res = (cal_r | cal_i) ? `ALU:
					 load            ?  `DM:
					 link				  ?  `DM:
					 jalr            ?  `DM:
											2'b00;//指令的写寄存器的结果从哪里来,详见Hazard
endmodule
