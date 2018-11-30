`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:28 11/17/2018 
// Design Name: 
// Module Name:    MUX 
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
module RegDstmux(
	input [1:0]RegDst,
	input [4:0]Rt,
	input [4:0]Rd,
	output reg[4:0]WA
    );
	
	always@(*)begin
		case(RegDst)
			2'b00:
				WA = Rt;
			2'b01:
				WA = Rd;
			default:
				WA = 31;//WA=31
		endcase
	end
endmodule

module ALUSrcmux(
	input ALUSrc,
	input [31:0]RD2,
	input [31:0]imm32,
	output [31:0]B
	);

	assign B=ALUSrc==1?imm32:RD2;
endmodule

module MemtoRegmux(
	input [1:0]MemtoReg,
	input [31:0]Result,
	input [31:0]RD,
	input [31:0]PC0,
	output reg [31:0]WD
	);
	
	always@(*)begin
		case(MemtoReg)
			2'b00:
				WD = Result;
			2'b01:
				WD = RD;
			2'b10:
				WD = PC0 + 4;
		endcase
	end
endmodule

module PCSelmux(
	input PCSel,
	input [31:0]nPC_jal,
	input [31:0]nPC_jr,
	output [31:0]nPC
	);
	
	assign nPC = PCSel? nPC_jr : nPC_jal;
endmodule
	