`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    11:07:28 11/17/2018 
// Design Name: 
// Module Name:    MUX 
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
module RegDstmux(
	input [1:0]RegDst,
	input [4:0]Rt,
	input [4:0]Rd,
	output reg[4:0]WA
    );
	
	always@(*)begin
		case(RegDst)
			2'b00:
				WA = Rt;
			2'b01:
				WA = Rd;
			default:
				WA = 31;//WA=31
		endcase
	end
endmodule

module ALUSrcmux(
	input ALUSrc,
	input [31:0]RD2,
	input [31:0]imm32,
	output [31:0]B
	);

	assign B = ALUSrc==1 ? imm32 : RD2;
endmodule

module ALUMultmux(
	input [31:0] Result2,
	input [31:0] HILO,
	input ALUMultSel,
	output [31:0] Result2out
	);
	
	assign Result2out = ALUMultSel ? HILO : Result2;
endmodule

module MemtoRegmux(
	input [1:0]MemtoReg,
	input [31:0]Result,
	input [31:0]RD,
	input [31:0]PC,
	output reg [31:0]WD
	);
	
	always@(*)begin
		case(MemtoReg)
			2'b00:
				WD = Result;
			2'b01:
				WD = RD;
			2'b10:
				WD = PC + 8;//if consider delay branch,PC+8;if not PC+4
		endcase
	end
endmodule

/*module PCSelmux(
	input [1:0]PCSel,
	input [31:0]PCin_jal,
	input [31:0]PCin_jr,
	input [31:0]PCin_beq,
	output reg[31:0]PCin
	);
	
	always@(*)begin
		case(PCSel)
			2'b00://beq
				PCin = PCin_beq;
			2'b01://jal
				PCin = PCin_jal;
			2'b10://jr
				PCin = PCin_jr;
		endcase
	end
endmodule
*/