`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:26 11/24/2018 
// Design Name: 
// Module Name:    Control 
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
module Decode_Controller(
	input RD_Equal,
	input [31:0]Instr1,
	output [1:0]ExtOp,
	output [1:0]PCSel
    );
	
	wire [5:0]Op,Func;
	
	assign Op = Instr1[31:26];
	assign Func = Instr1[5:0];
	
	assign ExtOp =
		(Op == 6'b100011) ? 2'b10 :
		(Op == 6'b101011) ? 2'b10 :
		(Op == 6'b000100) ? 2'b11 :
		(Op == 6'b001111) ? 2'b01 :
		2'b00;
	assign PCSel = 
		(Op == 6'b000100 & RD_Equal == 1) ? 2'b01 :
		(Op == 6'b000011) ? 2'b10 :
		(Op == 6'b000010) ? 2'b10 :
		(Op == 6'b000000 & Func == 6'b001000) ? 2'b11 :
		2'b00;
endmodule

module Execution_Controller(
	input [31:0]Instr2,
	output [3:0]ALUOp,
	output [1:0]RegDst,
	output ALUSrc
	);
	
	wire [5:0]Op,Func;
	
	assign Op = Instr2[31:26];
	assign Func = Instr2[5:0];
	
	assign ALUOp = 
		(Op == 6'b000000 & Func == 6'b100011) ? 4'b0110 :
		(Op == 6'b001101) ? 4'b0001 :
		(Op == 6'b000100) ? 4'b0110 :
		4'b0010;
	assign RegDst = 
		(Op == 6'b000000 & Func == 6'b100001) ? 2'b01 :
		(Op == 6'b000000 & Func == 6'b100011) ? 2'b01 :
		(Op == 6'b000011) ? 2'b10 :
		2'b00;
	assign ALUSrc =
			(Op == 6'b001101) ? 1'b1 :
			(Op == 6'b100011) ? 1'b1 :
			(Op == 6'b101011) ? 1'b1 :
			(Op == 6'b001111) ? 1'b1 :
			1'b0;
endmodule

module Memory_Controller(
	input [31:0]Instr3,
	output MemRead,
	output MemWrite
	);
	
	wire [5:0]Op,Func;
	
	assign Op = Instr3[31:26];
	//assign Func = Instr3[5:0];
	
	assign MemRead =
		(Op == 6'b100011) ? 1'b1 :
		1'b0;
	assign MemWrite = 
		(Op == 6'b101011) ? 1'b1 :
		1'b0;
endmodule

module WriteBack_Controller(
	input [31:0]Instr4,
	output [1:0]MemtoReg,
	output RegWrite
	);
	
	wire [5:0]Op,Func;
	
	assign Op = Instr4[31:26];
	assign Func = Instr4[5:0];
	
	assign MemtoReg = 
		(Op == 6'b100011) ? 2'b01 :
		(Op == 6'b000011) ? 2'b10 :
		2'b00;
		
	assign RegWrite = 
		(Op == 6'b000000 & Func == 6'b100001) ? 1'b1 :
		(Op == 6'b000000 & Func == 6'b100011) ? 1'b1 :
		(Op == 6'b001101) ? 1'b1 :
		(Op == 6'b100011) ? 1'b1 :
		(Op == 6'b001111) ? 1'b1 :
		(Op == 6'b000011) ? 1'b1 :
		1'b0;
endmodule
