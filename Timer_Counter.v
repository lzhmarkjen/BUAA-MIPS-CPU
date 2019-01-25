`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: lzhmarkjen
// 
// Create Date:    20:16:11 12/13/2018 
// Design Name: 
// Module Name:    Timer_Counter 
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
`define IDLE 2'b00
`define LOAD 2'b01
`define CNT  2'b10
`define INT  2'b11
module Timer_Counter(//根据地址[7:4]决定是计时器0还是计时器1
	 input clk,
	 input reset,
	 input [3:0]Addr_In,
	 input WE,
	 input [31:0]Data_In,
	 output [31:0]Data_Out,
    output IRQ
    );
	
	reg [31:0] CTRL;//[3:3]0禁止中断 1允许中断 [2:1]00方式0 01方式1 [0:0]0停止计数 1允许计数
	reg [31:0] PRESET;//counter initial value
	reg [31:0] COUNT;//counter
	
	reg [1:0]State;
	reg Interupt;
	
	assign IRQ = Interupt & CTRL[3:3];
	assign Data_Out = Addr_In==4'b0000 ?   CTRL:
							Addr_In==4'b0100 ? PRESET:
							Addr_In==4'b1000 ?  COUNT:
													  32'b0;
	
	initial begin
		CTRL = 0;
		PRESET = 0;
		COUNT = 0;
		State = 0;
		Interupt = 0;
	end
	
	always@(posedge clk)begin
		if(reset)begin
			CTRL <= 0;
			PRESET <= 0;
			COUNT <= 0;
			State <= 0;
			Interupt <= 0;
		end
		else if(WE)begin//Write
			if(Addr_In==4'b0000)
				CTRL <= Data_In;
			else if(Addr_In==4'b0100)
				PRESET <= Data_In;
			//else if(Addr_In==4'b1000)//COUNT不能写
				//COUNT <= Data_In;
		end	
		else begin
			case(State)
				`IDLE:begin
					if(CTRL[0:0])begin
						Interupt <= 0;
						State <= `LOAD;
					end
				end
				
				`LOAD:begin
					COUNT <= PRESET;
					State <= `CNT;
				end
				
				`CNT:begin
					COUNT <= COUNT - 1;
					if(!CTRL[0:0])
						State <= `IDLE;
					else if(CTRL[0:0] & COUNT <= 1)begin
						Interupt <= 1;
						State <= `INT;
					end
				end
				
				`INT:begin
					if(CTRL[2:1]==2'b00)begin//Pattern 0
						State <= `IDLE;
						CTRL[0:0] <= 0;
					end
					else if(CTRL[2:1]==2'b01)begin//Pattern 1
						State <= `IDLE;
						Interupt <= 0;
					end		
				end
			endcase		
		end
	end
endmodule
