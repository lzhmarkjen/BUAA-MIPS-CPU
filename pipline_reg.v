`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    16:27:28 11/23/2018 
// Design Name: 
// Module Name:    pipline_reg 
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
module IF_ID(
	input [31:0]Instr0,
	input [31:0]PC0,
	input clk,
	input reset,
	input IF_ID_En,
	output reg[31:0]PC1,
	output reg[31:0]Instr1
    );
	initial begin
		PC1 = 0;
		Instr1 = 0;
	end
	always@(posedge clk)begin
		if(reset)begin
			PC1 <= 0;
			Instr1 <= 0;
		end
		else if(IF_ID_En)begin
			PC1 <= PC0;
			Instr1 <= Instr0;
		end
	end
endmodule

module ID_EX(
	input [31:0]PC1,
	input [31:0]Instr1,
	input clk,
	input reset,
	input [31:0]imm32_1,
	input [31:0]A1,
	input [31:0]B1,
	output reg [31:0]PC2,
	output reg [31:0]Instr2,
	output reg [31:0]imm32_2,
	output reg [31:0]A2,
	output reg [31:0]B2
	);
	initial begin
		PC2 = 0;
		Instr2 = 0;
		imm32_2 = 0;
		A2 =0;
		B2 =0;
	end
	always@(posedge clk)begin
		if(reset)begin
			PC2 <= 0;
			Instr2 <= 0;
			imm32_2 <= 0;
			A2 <=0;
			B2 <=0;
		end
		else begin
			PC2 <= PC1;
			Instr2 <= Instr1;
			imm32_2 <= imm32_1;
			A2 <= A1;
			B2 <= B1;
		end
	end
endmodule

module EX_MEM(
	input [31:0]PC2,
	input [31:0]Result2,
	input [31:0]B2,
	input [4:0]WA2,
	input clk,
	input reset,
	input [31:0]Instr2,
	input [31:0]imm32_2,
	output reg [31:0]PC3,
	output reg [31:0]Result3,
	output reg [31:0]B3,
	output reg [31:0]Instr3,
	output reg [4:0]WA3,
	output reg [31:0]imm32_3
	);
	initial begin
		PC3 = 0;
		Result3 = 0;
		B3 = 0;
		WA3 = 0;
		Instr3 = 0;
		imm32_3 = 0;
	end
	always@(posedge clk)begin
		if(reset)begin
			PC3 <= 0;
			Result3 <= 0;
			B3 <= 0;
			WA3 <= 0;
			Instr3 <= 0;
			imm32_3 <= 0;
		end
		else begin
			PC3 <= PC2;
			Result3 <= Result2;
			B3 <= B2;
			WA3 <= WA2;
			Instr3 <= Instr2;
			imm32_3 <= imm32_2;
		end
	end
endmodule

module MEM_WB(
	input [31:0]PC3,
	input [31:0]Instr3,
	input [31:0]RD3,
	input [31:0]Result3,
	input [4:0]WA3,
	input clk,
	input reset,
	output reg [31:0]PC4,
	output reg [31:0]Instr4,
	output reg [31:0]RD4,
	output reg [31:0]Result4,
	output reg [4:0]WA4
	);
	initial begin
		PC4 = 0;
		Instr4 = 0;
		RD4 = 0;
		Result4 = 0;
		WA4 = 0;
	end
	always@(posedge clk)begin
		if(reset)begin
			PC4 <= 0;
			Instr4 <= 0;
			RD4 <= 0;
			Result4 <= 0;
			WA4 <= 0;
		end
		else begin
			PC4 <= PC3;
			Instr4 <= Instr3;
			RD4 <= RD3;
			Result4 <= Result3;
			WA4 <= WA3;
		end
	end
endmodule

	