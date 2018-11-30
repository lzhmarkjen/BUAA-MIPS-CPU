`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:44 11/16/2018 
// Design Name: 
// Module Name:    RegFile 
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
module GRF(
    input [4:0] RA1,
    input [4:0] RA2,
    input [4:0] WA,
    input [31:0] WD,
    input clk,
    input reset,
	 input RegWrite,
	 input [31:0]PC0,
    output [31:0] RD1,
    output [31:0] RD2
    );
	
	integer i;
	reg [31:0] Reg [31:0];
	
	assign RD1 = Reg[RA1];
	assign RD2 = Reg[RA2];
	
	initial
		for(i=0;i<32;i=i+1)
			Reg[i] <= 32'h00000000;

	always @(posedge clk)begin
		if(reset)
			for(i=0;i<32;i=i+1)
				Reg[i] <= 32'h0;
		else if(RegWrite)
			if(WA!=5'b00000)begin//Reg[0] always stays 0
				Reg[WA] <= WD;
				$display("@%h: $%d <= %h", PC0, WA,WD);
			end
	end

endmodule
