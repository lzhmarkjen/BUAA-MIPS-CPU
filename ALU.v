`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:53:54 11/16/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUOp,
	 input [4:0] shift_offset,
    output reg [31:0] Result,
	 output reg Overflow
    );
	
	reg [32:0] temp;
	
	always@(*)begin
		case(ALUOp)
			4'b0000:begin
				Result = A & B;
				Overflow = 0;
			end
			4'b0001:begin
				Result = A | B;
				Overflow = 0;
			end
			4'b0010:begin//Overflow
				temp = {A[31],A} + {B[31],B};
				Result = temp[31:0];
				Overflow = temp[32]!=temp[31];
			end
			4'b0011:begin//no Overflow
				Result = A + B;
				Overflow = 0;
			end
			4'b0100:begin
				Result = A ^ B;
				Overflow = 0;
			end
			4'b0101:begin
				Result = ~(A | B);
				Overflow = 0;
			end
			4'b0110:begin//Overflow
				temp = {A[31],A} - {B[31],B};
				Result = temp[31:0];
				Overflow = temp[32]!=temp[31];
			end
			4'b0111:begin//no Overflow
				Result = A - B;
				Overflow = 0;
			end
			4'b1000:begin
				Result = B << (A[4:0]+shift_offset);
				Overflow = 0;
			end
			4'b1001:begin
				Result = B >> (A[4:0]+shift_offset);
				Overflow = 0;
			end
			4'b1010:begin
				Result = B <<< (A[4:0]+shift_offset);
				Overflow = 0;
			end
			4'b1011:begin
				Result = $signed(B) >>> (A[4:0]+shift_offset);
				Overflow = 0;
			end
			4'b1100:begin
				Result = ($signed(A)<$signed(B));
				Overflow = 0;
			end
			4'b1101:begin
				Result = (A < B);
				Overflow = 0;
			end
			default:
				;
		endcase
	end

endmodule
