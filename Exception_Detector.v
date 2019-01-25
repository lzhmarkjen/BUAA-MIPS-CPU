`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    15:31:31 12/14/2018 
// Design Name: 
// Module Name:    Exception_Detector 
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
`define Int  5'd0
`define AdEL 5'd4
`define AdES 5'd5
`define RI   5'd10
`define Ov   5'd12
module Exception(
	 input clk,
	 input reset,//#################
	 input PC_Exc,
	 input RI,
	 input Ov,
	 input AdEL_E,
	 input AdES_E,
	 input AdEL_M,
	 input AdES_M,
	 input [31:0] PC0, 
	 input [31:0] PC1, 
    input [31:0] PC2, 
    input [31:0] PC3, 
    input [31:0] PC4,//
	 output [4:0] ExcCode
    );
	 
	 wire [4:0]Exc0,Exc1in,Exc1out,Exc2in,Exc2out,Exc3in;
	 
	 ExcReg ExcRegIF_ID (clk,reset,Exc0   ,Exc1in);
	 ExcReg ExcRegID_EX (clk,reset,Exc1out,Exc2in);
	 ExcReg ExcRegEX_MEM(clk,reset,Exc2out,Exc3in);
	 
	 assign Exc0 = PC_Exc ? `AdEL:5'b0;//F��ȡָ����
	 
	 assign Exc1out = RI ?   `RI://D��ָ����Ч
								 Exc1in;
											
	 assign Exc2out = AdEL_E ? `AdEL://E������load���
							AdES_E ? `AdES://E������store���
							Ov  	 ?   `Ov://E������add���
									  Exc2in;
									  
	 assign ExcCode = AdEL_M ? `AdEL://M��load��ַ����
						   AdES_M ? `AdES://M��store��ַ����
						           Exc3in;
	
endmodule
