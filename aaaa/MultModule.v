`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:55 12/08/2018 
// Design Name: 
// Module Name:    MultModule 
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
`define MULT  (Op==6'b000000 & Func==6'b011000)
`define MULTU (Op==6'b000000 & Func==6'b011001)
`define DIV   (Op==6'b000000 & Func==6'b011010)
`define DIVU  (Op==6'b000000 & Func==6'b011011)
`define MFHI  (Op==6'b000000 & Func==6'b010000)
`define MFLO  (Op==6'b000000 & Func==6'b010010)
`define MTHI  (Op==6'b000000 & Func==6'b010001)
`define MTLO  (Op==6'b000000 & Func==6'b010011)
module MultModule(
	 input clk,
	 input reset,
	 input [31:0]Instr2,
    input [31:0] A,
    input [31:0] B2,
    input Start,
    output [31:0] HILO,
    output reg Busy
    );
	
	reg [4:0]count;
	reg [31:0] HI,LO;
	reg [31:0] ans_HI,ans_LO;
	reg _time;
	
	wire [5:0] Op = Instr2[31:26];
	wire [5:0] Func = Instr2[5:0];
	
	assign HILO = `MFHI ?    HI:
					  `MFLO ?    LO:
							    32'b0;//output HILO mux
	
	initial begin
		HI = 0;
		LO = 0;
		Busy = 0;
		count = 1;
		ans_HI = 0;
		ans_LO = 0;
		_time = 0;
		HI = 0;
		LO = 0;
	end
	
	always @(posedge clk)begin
		if(reset)begin
			HI <= 0;
			LO <= 0;
			ans_HI <= 0;
			ans_LO <= 0;
		end
		else if(`MTHI)
				HI <= A;
		else if(`MTLO)
				LO <= A;
			
		else if(Start & !Busy)begin
			Busy <= 1;
			if(`MULT)begin
				{ans_HI,ans_LO} = $signed(A) * $signed(B2);
				_time <= 0;
			end
			else if(`MULTU)begin
				{ans_HI,ans_LO} = A * B2;
				_time <= 0;
			end
			else if(`DIV)begin
				if(B2 == 32'b0)begin
					ans_LO = 0;
					ans_HI = 0;
				end
				else begin
					ans_LO = $signed(A) / $signed(B2);
					ans_HI = $signed(A) % $signed(B2);
				end
				_time <=1;
			end
			else if(`DIVU)begin
				if(B2 == 32'b0)begin
					ans_LO = 0;
					ans_HI = 0;
				end
				else begin
					ans_LO = A / B2;
					ans_HI = A % B2;
				end
				_time <=1;
			end
		end
		/*
		else if(`MULT & Start & !Busy)begin
			{ans_HI,ans_LO} = $signed(A) * $signed(B2);
			Busy <= 1;
		end
		else if(`MULTU & Start & !Busy)begin
			{ans_HI,ans_LO} = A * B2;
			Busy <= 1;
		end
		else if(`DIV & Start & !Busy)begin
			{ans_HI,ans_LO} = $signed(A) / $signed(B2);
			Busy <= 1;
		end
		else if(`DIVU & Start & !Busy)begin
			{ans_HI,ans_LO} = A / B2;
			Busy <= 1;
		end
		*/
	end
//////////////////////////////////////////////////////////
	always @(posedge clk)begin
		if(reset)begin
			count <= 1;
			Busy <= 0;
			_time <= 0;
		end
		else if(Busy)begin
			count <= count + 1;
			if(count == 4'd5 & !_time)begin
				count <= 1;
				Busy <= 0;
				HI <= ans_HI;
				LO <= ans_LO;
			end
			else if(count == 4'd10 & _time)begin
				count <= 1;
				Busy <= 0;
				HI <= ans_HI;
				LO <= ans_LO;
				_time <= 0;
			end
		end
	end
endmodule
