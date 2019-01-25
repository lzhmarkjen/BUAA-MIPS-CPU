`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:46:12 12/06/2018 
// Design Name: 
// Module Name:    WB_Ext 
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
module WB_Ext(
	input [1:0] _byte,
	input [31:0] RD4in,
	input [2:0] ReadBE,
	output [31:0] RD4out
    );
	 
	wire [31:0] RD4Ext = RD4in>>(8*_byte);
	
	assign RD4out = 
		ReadBE == 3'b000 ? RD4Ext:
		ReadBE == 3'b001 ? { 24'b0             ,RD4Ext[ 7:0]}:
		ReadBE == 3'b010 ? {{24{RD4Ext[7:7]}}  ,RD4Ext[ 7:0]}:
		ReadBE == 3'b011 ? { 16'b0             ,RD4Ext[15:0]}:
		ReadBE == 3'b100 ? {{16{RD4Ext[15:15]}},RD4Ext[15:0]}:
		RD4Ext;

endmodule
