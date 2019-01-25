`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    17:09:51 11/23/2018 
// Design Name: 
// Module Name:    Fetch 
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
module Fetch(
	input clk,
	input reset,
	input [1:0]PCSel,
	input [31:0]PC_j,
	input [31:0]PC_jr,
	input [31:0]PC_beq,
	input PC_En,
	input IF_ID_En,
	input IF_ID_Clr,
	output [31:0]PC1,
	output [31:0]Instr1
    );
	
	reg [31:0] PC0;
	wire [31:0]Instr0;
	
	initial 
		PC0 <= 32'h00003000;//initial PC to 0x3000
		
	always @(posedge clk)begin
		if(reset)//reset
			PC0 <= 32'h00003000;
		else if(PC_En)begin
			case(PCSel)
				2'b00:
					PC0 <= PC0 + 4;
				2'b01:
					PC0 <= PC_beq;
				2'b10:
					PC0 <= PC_j;
				2'b11:
					PC0 <= PC_jr;
			endcase
		end
	end
/////////////////	PC part
	IM im(
	.PC0(PC0),
	.Instr(Instr0)
	);
///////////////// Fetch part
	IF_ID if_id(
	.Instr0(Instr0),
	.PC0(PC0),
	.clk(clk),
	.reset(reset|IF_ID_Clr),
	.IF_ID_En(IF_ID_En),//
	.PC1(PC1),
	.Instr1(Instr1)
    );
/////////////////	Store part
endmodule
