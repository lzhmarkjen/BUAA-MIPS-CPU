`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:09:51 11/23/2018 
// Design Name: 
// Module Name:    Fetch 
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
module Fetch(
	input clk,
	input reset,
	input [2:0]PCSel,
	input [31:0]PC_j,
	input [31:0]PC_jr,
	input [31:0]PC_beq,
	input PC_En,
	input IF_ID_En,
	input IF_ID_Clr,
	input [31:0] EPC,
	input IntReq,
	output reg [31:0]PC0,
	output [31:0]PC1,
	output [31:0]Instr1,
	output PC_Exc
    );
	
	wire [31:0]Instr0;
	wire [31:0]Instr0new;
	
	initial 
		PC0 <= 32'h00003000;//initial PC to 0x3000
		
	always @(posedge clk)begin
		if(reset)//reset
			PC0 <= 32'h00003000;
		else if(PC_En | IntReq)begin//中断来临时，PC强制更新
			case(PCSel)
				3'b000:
					PC0 <= PC0 + 4;
				3'b001:
					PC0 <= PC_beq;
				3'b010:
					PC0 <= PC_j;
				3'b011:
					PC0 <= PC_jr;
				3'b101://系统复位
					PC0 <= 32'h00004180;
				3'b111://ERET的返回
					PC0 <= EPC;
			endcase
		end
	end
/////////////////	PC part
	IM im(
	.PC0(PC0),
	.Instr(Instr0)
	);
///////////////// Fetch part
	IF_ID if_id(
	.Instr0(Instr0new),
	.PC0(PC0),
	.clk(clk),
	.reset(reset | IF_ID_Clr | IntReq),
	.IF_ID_En(IF_ID_En),//
	.PC1(PC1),
	.Instr1(Instr1)
    );
/////////////////	Store part
	assign PC_Exc = PC0[1:0]!=2'b00    ? 1'b1://PC没有与4对齐
						 PC0 < 32'h00003000 ? 1'b1://超出范围
						 PC0 > 32'h00004FFF ? 1'b1://超出范围
													 1'b0;
	
	assign Instr0new = PC_Exc ? 32'b0:Instr0;//假如取指报错，则该指令视为nop
/////////////////		Exception part
endmodule
