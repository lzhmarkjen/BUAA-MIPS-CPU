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
    output reg [31:0] Result
    );
	
	always@(*)begin
		case(ALUOp)
			4'b0000:
				Result = A & B;
			4'b0001:
				Result = A | B;
			4'b0010:
				Result = A + B;
			4'b0100:
				Result = A ^ B;
			4'b0101:
				Result = ~(A | B);
			4'b0110:
				Result = A - B;
			4'b1000:
				Result = B << (A[4:0]+shift_offset);
			4'b1001:
				Result = B >> (A[4:0]+shift_offset);
			4'b1010:
				Result = B <<< (A[4:0]+shift_offset);
			4'b1011:
				Result = $signed(B) >>> (A[4:0]+shift_offset);//signed?
			4'b1100:
				Result = ($signed(A)<$signed(B));
			4'b1101:
				Result = (A < B);
			default:
				;
		endcase
	end

endmodule
