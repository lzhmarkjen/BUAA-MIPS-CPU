`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
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

	reg [31:0] rom[1023:0];
	//reg [9:0] im_addr=0;//10 bits im_addr
	integer i;
	wire [9:0]addr;
	wire [31:0]PC;
	reg [31:0]Instr_init;
	
	assign PC = PC0-32'h00003000;
	assign addr = PC[11:2];
	
	initial begin
		for(i=0;i<1024;i=i+1)
			rom[i] = 32'b0;
		$readmemh("code.txt",rom);
	end
	
	always @(*)begin//im_addr = PC0[11:2];
		Instr = rom[addr];
	end
endmodule
