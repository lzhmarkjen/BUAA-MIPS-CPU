`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:42:21 11/29/2018 
// Design Name: 
// Module Name:    InstrCoder 
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
module InstrCoder(
    input [31:0] Instr,
	 output cal_r,
	 output cal_i,
	 output branch,
	 output load,
	 output store,
	 output jr,
	 output link,
	 output RegWrite,
	 output [4:0]WA,
	 output [1:0]Res,
	 output mt,
	 output mf,
	 output mult
    );
	
	wire [5:0]Op,Func;
	assign Op = Instr[31:26];
	assign Func = Instr[5:0];
	
	assign cal_r   = `ADD | `ADDU | `SUB | `SUBU | `SLL | `SRL | `SRA | `SLLV | `SRLV | `SRAV | `AND | `OR | `XOR | `NOR | `SLT | `SLTU ;
	assign cal_i   = `ADDI | `ADDIU | `ANDI | `ORI | `XORI | `LUI | `SLTI | `SLTIU;
	assign branch  = `BEQ | `BNE | `BLEZ | `BGTZ | `BLTZ | `BGEZ ;
	assign load    = `LB | `LBU | `LH | `LHU | `LW;
	assign store   = `SB | `SH | `SW;
	assign jr      = `JR | `JALR;
	assign link    = `JAL;
	assign linkreg = `JALR;
	assign mult = `MULT | `MULTU | `DIV | `DIVU ;
	assign mf      = `MFHI | `MFLO;
	assign mt		= `MTHI | `MTLO;

	//assign jump = `J | `JAL | `JALR | `JR;
	
	assign RegWrite = cal_r | cal_i | load | link | linkreg | mf;
	
	assign WA = (cal_r|linkreg|mf) ? Instr[`rd]:
					(cal_i|load)       ? Instr[`rt]:
					link			       ?	  5'b11111:
												      5'b0;
	
	assign Res = (cal_r|cal_i|mf) ? `ALU:
					 load             ?  `DM:
					 (link | linkreg) ?  `DM:
											 2'b00;//指令的写寄存器的结果从哪里来
endmodule
