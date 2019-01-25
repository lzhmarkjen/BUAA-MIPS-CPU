`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:58:44 11/16/2018 
// Design Name: 
// Module Name:    DM 
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
module DM(
	input [9:0] A,
	input [31:0] WData,
	input MemRead,
	input MemWrite,
	input clk,
	input reset,
	input [31:0]PC,
	output [31:0] RD
    );
	
	reg [31:0] ram[1023:0];//size = 1K
	integer i;
	wire [31:0]WA;
	
	assign RD = MemRead? ram[A]:0;
	//assign WA = 32'b0 + 4 * A;
	
	initial begin
		for(i=0;i<1024;i=i+1)
			ram[i] <= 32'b0;
	end
	
	always @(posedge clk)begin
			if(reset)begin
				for(i=0;i<1024;i=i+1)
					ram[i] <= 32'b0;
			end
			else if(MemWrite)begin
				ram[A] <= WData;
				//$display("@%h: *%h <= %h",PC, WA,WData);
				$display("%d@%h: *%h <= %h", $time, PC, (32'b0 + 4 * A),WData);
			end
	end
	
endmodule
