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
	input RD_AEqualB,
	input RD_ASmall0,
	input RD_AEqual0,
	input [31:0]Instr1,
	output [1:0]ExtOp,
	output [1:0]PCSel
    );
	
	wire [5:0] Op = Instr1[31:26];
	wire [5:0] Func = Instr1[5:0];
	wire [31:0] Instr = Instr1;
	
	assign ExtOp =
		`LB   | `LBU | `LH | `LHU | `LW 				   ? 2'b10:
		`SB   | `SH  | `SW 								   ? 2'b10:
		`ADDI | `ADDIU 								      ? 2'b10:
		`SLTI | `SLTIU											? 2'b10:
		`BEQ  | `BNE | `BLEZ | `BLTZ | `BGEZ | `BGTZ ? 2'b11:
		`LUI 											         ? 2'b01:
															        2'b00;
	assign PCSel = 
		`BEQ  &  RD_AEqualB		 			  ? 2'b01:
		`BNE  & !RD_AEqualB 					  ? 2'b01:
		`BLTZ &  RD_ASmall0  				  ? 2'b01:
		`BLEZ & (RD_ASmall0  | RD_AEqual0) ? 2'b01:
		`BGTZ & !(RD_ASmall0 | RD_AEqual0) ? 2'b01:
		`BGEZ & !RD_ASmall0  				  ? 2'b01:
		`J  | `JAL          					  ? 2'b10:
		`JR | `JALR							     ? 2'b11:
												       2'b00;
endmodule
/////////////////////////////////////////////////////////////////////////
module Execution_Controller(
	input [31:0]Instr2,
	output [3:0]ALUOp,
	output [1:0]RegDst,
	output ALUSrc,
	output ALUMultSel
	);
	
	wire [5:0] Op = Instr2[31:26];
	wire [5:0] Func = Instr2[5:0];
	
	assign ALUOp = 
		`AND 	| `ANDI  ? 4'b0000:
		`OR 	| `ORI   ? 4'b0001:
	   `SUB  | `SUBU  ? 4'b0110:
		`XOR	| `XORI  ? 4'b0100:
		`NOR 			   ? 4'b0101:
		`SLL	| `SLLV  ? 4'b1000:
		`SRL 	| `SRLV  ? 4'b1001:
		`SRA 	| `SRAV  ? 4'b1011:
		`SLT 	| `SLTI  ? 4'b1100:
		`SLTIU | `SLTU ? 4'b1101:
							  4'b0010;
	assign RegDst = 
		`ADD | `ADDU | `SUB | `SUBU 				     ? 2'b01:
		`SLL | `SRL  | `SRA | `SLLV | `SRLV | `SRAV ? 2'b01:
		`AND | `OR   | `XOR | `NOR 					  ? 2'b01:
		`SLT | `SLTU 									     ? 2'b01:
		`JALR 											     ? 2'b01:
		`JAL 											        ? 2'b10:
		`MFHI | `MFLO										  ? 2'b01:
														          2'b00;
	assign ALUSrc =
			`LB | `LBU | `LH | `LHU | `LW | `SB | `SH | `SW 				  ? 1'b1:
			`ADDI | `ADDIU | `ANDI | `ORI | `XORI | `LUI | `SLTI | `SLTIU ? 1'b1:
																					          1'b0;
	assign ALUMultSel = 
			`MFHI | `MFLO ? 1'b1:1'b0;
endmodule
///////////////////////////////////////////////////////////////////////
module Memory_Controller(
	input [31:0]Instr3,
	input [1:0]Addr,
	output MemRead,
	output MemWrite,
	output [3:0]WriteBE
	);
	
	wire [5:0] Op = Instr3[31:26];
	wire [5:0] Func = Instr3[5:0];
	
	assign MemRead =
		`LB | `LBU | `LH | `LHU | `LW ? 1'b1 :
											     1'b0;
	assign MemWrite = 
		`SB | `SH | `SW ? 1'b1 :
							1'b0;
	assign WriteBE = 
		`SW 							 ? 4'b1111:
		`SH & !Addr[1:1] 		 ? 4'b0011:
		`SH & Addr[1:1]		    ? 4'b1100:
		`SB & Addr[1:0]==2'b00 ? 4'b0001:
		`SB & Addr[1:0]==2'b01 ? 4'b0010:
		`SB & Addr[1:0]==2'b10 ? 4'b0100:
		`SB & Addr[1:0]==2'b11 ? 4'b1000:
										   4'b1111;
		
endmodule
///////////////////////////////////////////////////////////
module WriteBack_Controller(
	input [31:0]Instr4,
	output [1:0]MemtoReg,
	output RegWrite,
	output [2:0] ReadBE
	);
	
	wire [5:0] Op = Instr4[31:26];
	wire [5:0] Func = Instr4[5:0];
	
	assign MemtoReg = 
		`LB | `LBU | `LH | `LHU | `LW ? 2'b01:
		`JAL | `JALR 					   ? 2'b10:
											     2'b00;
		
	assign RegWrite = 
		`ADD | `ADDU | `SUB | `SUBU | `AND | `OR | `XOR | `NOR ? 1'b1:
		`ADDI | `ADDIU | `ANDI | `ORI | `XORI | `LUI 		    ? 1'b1:
		`SLL | `SRL | `SRA | `SLLV | `SRLV | `SRAV 			    ? 1'b1:
		`LB | `LBU | `LH | `LHU | `LW 							    ? 1'b1:
		`SLT | `SLTI | `SLTIU | `SLTU 							    ? 1'b1:
		`JAL | `JALR 												       ? 1'b1:
		`MFHI | `MFLO														 ? 1'b1:
																		         1'b0;
	
	assign ReadBE = 
		`LW  ? 3'b000:
		`LBU ? 3'b001:
		`LB  ? 3'b010:
		`LHU ? 3'b011:
		`LH  ? 3'b100:
		       3'b000;
		
endmodule
