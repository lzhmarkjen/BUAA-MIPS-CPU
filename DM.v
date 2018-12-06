`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
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
	input [11:0] A,
	input [31:0] WData,
	input MemRead,
	input MemWrite,
	input clk,
	input reset,
	input [31:0] PC,
	input [3:0]WriteBE,
	output [31:0] RD
    );
	
	reg [31:0] ram[4095:0];//size = 4K
	integer i;
	wire [31:0]WD;
	
	assign RD = MemRead ? ram[A]:0;
	//assign WA = 32'b0 + 4 * A;
	assign WD[31:24] = WriteBE[3:3] ? WData[31:24]:8'b0;
	assign WD[23:16] = WriteBE[2:2] ? WData[23:16]:8'b0;
	assign WD[15:8]  = WriteBE[1:1] ? WData[15:8] :8'b0;
	assign WD[7:0]   = WriteBE[0:0] ? WData[7:0]  :8'b0;
	
	initial begin
		for(i=0;i<4096;i=i+1)
			ram[i] <= 32'b0;
	end
	
	always @(posedge clk)begin
			if(reset)begin
				for(i=0;i<4096;i=i+1)
					ram[i] <= 32'b0;
			end
			else if(MemWrite)begin
				ram[A] <= WD;
				$display("%d@%h: *%h <= %h", $time, PC, (32'b0 + 4 * A),WD);
			end
	end
	
endmodule
