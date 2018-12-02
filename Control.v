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
`define op 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define func 5:0
`define ALU 2'b01
`define DM  2'b10
`define PC  2'b11
////////////////////////////////////////////////////////////////////
`define LB    (Op==6'b100000)
`define LBU   (Op==6'b100100)
`define LH    (Op==6'b100001)
`define LHU   (Op==6'b100101)
`define LW    (Op==6'b100011)
`define SB    (Op==6'b101000)
`define SH    (Op==6'b101001)
`define SW    (Op==6'b101011)
`define ADD   (Op==6'b000000 & Func==6'b100000)
`define ADDU  (Op==6'b000000 & Func==6'b100001)
`define SUB   (Op==6'b000000 & Func==6'b100010)
`define SUBU  (Op==6'b000000 & Func==6'b100011)
`define SLL   (Op==6'b000000 & Func==6'b000000)
`define SRL   (Op==6'b000000 & Func==6'b000010)
`define SRA   (Op==6'b000000 & Func==6'b000011)
`define SLLV  (Op==6'b000000 & Func==6'b000100)
`define SRLV  (Op==6'b000000 & Func==6'b000110)
`define SRAV  (Op==6'b000000 & Func==6'b000111)
`define AND   (Op==6'b000000 & Func==6'b100100)
`define OR    (Op==6'b000000 & Func==6'b100101)
`define XOR   (Op==6'b000000 & Func==6'b100110)
`define NOR   (Op==6'b000000 & Func==6'b100111)
`define ADDI  (Op==6'b001000)
`define ADDIU (Op==6'b001001)
`define ANDI  (Op==6'b001100)
`define ORI   (Op==6'b001101)
`define XORI  (Op==6'b001110)
`define LUI   (Op==6'b001111)
`define SLT   (Op==6'b000000 & Func==6'b101010)
`define SLTI  (Op==6'b001010)
`define SLTIU (Op==6'b001011)
`define SLTU  (Op==6'b000000 & Func==6'b101011)
`define BEQ   (Op==6'b000100)
`define BNE   (Op==6'b000101)
`define BLEZ  (Op==6'b000110)
`define BGTZ  (Op==6'b000111)
`define BLTZ  (Op==6'b000001 & Instr[20:16]==5'b00000)
`define BGEZ  (Op==6'b000001 & Instr[20:16]==5'b00001)
`define J     (Op==6'b000010)
`define JAL   (Op==6'b000011)
`define JALR  (Op==6'b000000 & Func==6'b001001)
`define JR    (Op==6'b000000 & Func==6'b001000)
`define MULT  (Op==6'b000000 & Func==6'b011000)
`define MULTU (Op==6'b000000 & Func==6'b011001)
`define DIV   (Op==6'b000000 & Func==6'b011010)
`define DIVU  (Op==6'b000000 & Func==6'b011011)
`define MFHI  (Op==6'b000000 & Func==6'b010000)
`define MFLO  (Op==6'b000000 & Func==6'b010010)
`define MTHI  (Op==6'b000000 & Func==6'b010001)
`define MTLO  (Op==6'b000000 & Func==6'b010011)
/////////////////////////////////////////////////////////////////
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
