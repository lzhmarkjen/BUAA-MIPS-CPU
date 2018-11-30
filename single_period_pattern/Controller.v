`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:49:05 11/17/2018 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [31:0] Instr,
    output reg [1:0]RegDst,
    output reg nPC_Sel,
    output reg [1:0] MemtoReg,
    output reg MemWrite,
    output reg MemRead,
    output reg [3:0] ALUCtrl,
    output reg ALUSrc,
    output reg RegWrite,
    output reg [1:0] ExtOp,
	 output reg PCWrite,
	 output reg PCSel
    );
	wire [5:0]Op;
	wire [5:0]func;
	
	assign Op = Instr[31:26];
	assign func = Instr[5:0];
	
	always@(*)begin
		case(Op)
			6'b000000:begin//R type
				case(func)
					6'b100001:begin//addu
						ALUCtrl = 4'b0010;
						RegDst = 2'b01;
						nPC_Sel = 0;
						MemtoReg = 2'b00;
						MemWrite = 0;
						MemRead = 0;
						ALUSrc = 0;
						RegWrite = 1;
						ExtOp = 2'b00;
						PCWrite = 0;
						PCSel = 0;
					end
					6'b100011:begin//subu
						ALUCtrl = 4'b0110;
						RegDst = 2'b01;
						nPC_Sel = 0;
						MemtoReg = 2'b00;
						MemWrite = 0;
						MemRead = 0;
						ALUSrc = 0;
						RegWrite = 1;
						ExtOp = 2'b00;
						PCWrite = 0;
						PCSel = 0;
					end
					6'b001000:begin//jr
						ALUCtrl = 4'b0010;
						RegDst = 2'b00;
						nPC_Sel = 0;
						MemtoReg = 2'b00;
						MemWrite = 0;
						MemRead = 0;
						ALUSrc = 0;
						RegWrite = 0;
						ExtOp = 2'b00;
						PCWrite = 1;
						PCSel = 1;
					end
					default:begin//nop
						ALUCtrl = 4'b0000;
						RegDst = 2'b00;
						nPC_Sel = 0;
						MemtoReg = 2'b00;
						MemWrite = 0;
						MemRead = 0;
						ALUSrc = 0;
						RegWrite = 0;
						ExtOp = 2'b00;
						PCWrite = 0;
						PCSel = 0;
					end
				endcase
				
			end
			6'b001101:begin//ori
				ALUCtrl = 4'b0001;
				RegDst = 2'b00;
				nPC_Sel = 0;
				MemtoReg = 2'b00;
				MemWrite = 0;
				MemRead = 0;
				ALUSrc = 1;
				RegWrite = 1;
				ExtOp = 2'b00;
				PCWrite = 0;
				PCSel = 0;
			end
			6'b100011:begin//lw
				ALUCtrl = 4'b0010;
				RegDst = 2'b00;
				nPC_Sel = 0;
				MemtoReg = 2'b01;
				MemWrite = 0;
				MemRead = 1;
				ALUSrc = 1;
				RegWrite = 1;
				ExtOp = 2'b10;
				PCWrite = 0;
				PCSel = 0;
			end
			6'b101011:begin//sw
				ALUCtrl = 4'b0010;
				RegDst = 2'b00;
				nPC_Sel = 0;
				MemtoReg = 2'b00;
				MemWrite = 1;
				MemRead = 0;
				ALUSrc = 1;
				RegWrite = 0;
				ExtOp = 2'b10;
				PCWrite = 0;
				PCSel = 0;
			end
			6'b000100:begin//beq
				ALUCtrl = 4'b0110;
				RegDst = 2'b00;
				nPC_Sel = 1;
				MemtoReg = 2'b00;
				MemWrite = 0;
				MemRead = 0;
				ALUSrc = 0;
				RegWrite = 0;
				ExtOp = 2'b11;
				PCWrite = 0;
				PCSel = 0;
			end
			6'b001111:begin//lui
				ALUCtrl = 4'b0010;
				RegDst = 2'b00;
				nPC_Sel = 0;
				MemtoReg = 2'b00;
				MemWrite = 0;
				MemRead = 0;
				ALUSrc = 1;
				RegWrite = 1;
				ExtOp = 2'b01;
				PCWrite = 0;
				PCSel = 0;
			end
			6'b000011:begin//jal
				ALUCtrl = 4'b0010;
				RegDst = 2'b10;
				nPC_Sel = 0;
				MemtoReg = 2'b10;
				MemWrite = 0;
				MemRead = 0;
				ALUSrc = 0;
				RegWrite = 1;
				ExtOp = 2'b00;
				PCWrite = 1;
				PCSel = 0;
			end
			default:begin//nop
				ALUCtrl = 4'b0000;
				RegDst = 2'b00;
				nPC_Sel = 0;
				MemtoReg = 2'b00;
				MemWrite = 0;
				MemRead = 0;
				ALUSrc = 0;
				RegWrite = 0;
				ExtOp = 2'b00;
				PCWrite = 0;
				PCSel = 0;
			end
		endcase
	end

endmodule
