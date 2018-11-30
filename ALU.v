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
    output reg [31:0] Result,
    output reg Zero
    );
	
	always@(*)begin
		case(ALUOp)
			4'b0000:
				Result = A & B;
			4'b0001:
				Result = A | B;
			4'b0010:
				Result = A + B;
			4'b0011:
				Result = $signed(A) + $signed(B);
			4'b0110:begin
				Result = A - B;
				Zero = (A==B)? 1'b1:1'b0;
			end
			default:
				;
		endcase
	end

endmodule
