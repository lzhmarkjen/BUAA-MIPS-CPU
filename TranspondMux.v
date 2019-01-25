`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    15:47:34 11/26/2018 
// Design Name: 
// Module Name:    TranspondMux 
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
module MFRSD(
	input [1:0]ForwardRSD,
	input [31:0]RD1,
	input [31:0]WD,
	input [31:0]Result3,
	output [31:0]A1
    );

	assign A1 = (ForwardRSD==2'b01) ? Result3:
					(ForwardRSD==2'b10) ? WD:
					RD1;

endmodule

module MFRTD(
	input [1:0]ForwardRTD,
	input [31:0]RD2,
	input [31:0]WD,
	input [31:0]Result3,
	output [31:0]B1
    );

	assign B1 = (ForwardRTD==2'b01) ? Result3:
					(ForwardRTD==2'b10) ? WD:
					RD2;

endmodule

module MFRSE(
	input [1:0]ForwardRSE,
	input [31:0]A2,
	input [31:0]Result3,
	input [31:0]WD,
	output [31:0]A
    );

	assign A = (ForwardRSE==2'b01) ? Result3:
				  (ForwardRSE==2'b10) ? WD	  :
				  A2;
endmodule

module MFRTE(
	input [1:0]ForwardRTE,
	input [31:0]B2in,
	input [31:0]Result3,
	input [31:0]WD,
	output [31:0]B2
    );

	assign B2 = (ForwardRTE==2'b01) ? Result3:
				   (ForwardRTE==2'b10) ? WD	  :
				   B2in;
endmodule

module MFRTM(
	input ForwardRTM,
	input [31:0]B3,
	input [31:0]WD,
	output [31:0]WData
	);
	
	assign WData = (ForwardRTM==1'b1) ? WD:
						B3;
endmodule
