`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:55 12/08/2018 
// Design Name: 
// Module Name:    MultModule 
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
`define MULT  (Op==6'b000000 & Func==6'b011000)
`define MULTU (Op==6'b000000 & Func==6'b011001)
`define DIV   (Op==6'b000000 & Func==6'b011010)
`define DIVU  (Op==6'b000000 & Func==6'b011011)
`define MFHI  (Op==6'b000000 & Func==6'b010000)
`define MFLO  (Op==6'b000000 & Func==6'b010010)
`define MTHI  (Op==6'b000000 & Func==6'b010001)
`define MTLO  (Op==6'b000000 & Func==6'b010011)
module MultModule(
	 input clk,
	 input reset,
	 input [31:0]Instr2,
    input [31:0] A,
    input [31:0] B2,
    input Start,
    output [31:0] HILO,
    output reg Busy
    );
	
	reg [3:0]count;
	reg [31:0] HI,LO;
	
	wire [5:0] Op = Instr2[31:26];
	wire [5:0] Func = Instr2[5:0];
	
	assign HILO = `MFHI ?    HI:
					  `MFLO ?    LO:
							    32'b0;
	
	initial begin
		HI = 0;
		LO = 0;
		Busy = 0;
		count = 0;
	end
	
	always @(posedge clk)begin
		if(reset)begin
			HI = 0;
			LO = 0;
			Busy = 0;
			count = 0;
		end
		else begin
			if(`MTHI)
				HI <= A;
			else if(`MTLO)
				LO <= A;
		end
	end
endmodule
