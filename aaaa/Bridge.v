`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:07 12/13/2018 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    input [31:0] PrAddr,//CPU gives address
	 input [31:0] PrWD,//CPU gives data
	 input PrWe,//CPU enables Writing devices
	 output [31:0] PrRD,//data to CPU
	 input [31:0] DEV0_RD,//Device0 gives data
	 input [31:0] DEV1_RD,//Device1 gives data
	 output [3:0] DEV_Addr,//address to device
	 output [31:0] DEV_WD,//data to device
	 output WeDEV0,
	 output WeDEV1
    );
	
	wire HitDEV0 = PrAddr==32'h00007F00 | PrAddr==32'h00007F04 | PrAddr==32'h00007F08;
	wire HitDEV1 = PrAddr==32'h00007F10 | PrAddr==32'h00007F14 | PrAddr==32'h00007F18;
	
	assign PrRD = HitDEV0 ? DEV0_RD:
					  HitDEV1 ? DEV1_RD:
									  32'b0;
	
	assign DEV_Addr = PrAddr[3:0];
	
	assign DEV_WD = PrWD;
	
	assign WeDEV0 = PrWe & HitDEV0;
	assign WeDEV1 = PrWe & HitDEV1;	

endmodule
