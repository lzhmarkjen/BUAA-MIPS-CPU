`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:27 11/16/2018 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input PCWrite,
	 input PCSrc,
	 input [31:0]offset,
	 input [31:0]nPC,
    output reg [31:0] PC0
    );

	initial 
		PC0 <= 32'h00003000;//initial PC to 0x3000
	
	always @(posedge clk)begin
		if(reset)//reset
			PC0 <= 32'h00003000;
		else if(PCSrc)//beq
			PC0 <= PC0 + 4 + offset;
		else if(PCWrite)//j type
			PC0 <= nPC;
		else
			PC0 <= PC0 + 4;
	end

endmodule
