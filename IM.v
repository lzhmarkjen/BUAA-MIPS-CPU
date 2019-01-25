`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:26:41 11/16/2018 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC0,
    output reg[31:0] Instr
    );//size = 1K

	reg [31:0] rom[4095:0];
	//reg [9:0] im_addr=0;//10 bits im_addr
	integer i;
	wire [31:0] PC = PC0 - 32'h00003000;
	wire [11:0] addr = PC[13:2];	
	
	initial begin
		for(i=0;i<4096;i=i+1)
			rom[i] = 32'b0;
		$readmemh("code.txt",rom);
		$readmemh("code_handler.txt",rom,1120,2047);
	end
	
	always @(*)begin//im_addr = PC0[11:2];
		Instr = rom[addr];
	end
endmodule
