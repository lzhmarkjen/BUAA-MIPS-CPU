`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    21:49:14 11/16/2018 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm16,
    input [1:0] ExtOp,
    output reg [31:0] imm32
    );
	 
	 reg [17:0] imm18;
	 
	 always @(*)begin
		case(ExtOp)
			2'b00:
				imm32 = {16'b0,imm16};
			2'b01:
				imm32 = {imm16,16'b0};
			2'b10:
				begin
					if(imm16[15:15])
						imm32 = {16'b1111111111111111,imm16};
					else
						imm32 = {16'b0,imm16};
				end
			default:
				begin
					imm18 = {imm16,2'b00};
					if(imm18[17:17]==1)
						imm32 = {14'b11111111111111,imm18};
					else
						imm32 = {14'b0,imm18};
				end
			endcase
		end
endmodule
