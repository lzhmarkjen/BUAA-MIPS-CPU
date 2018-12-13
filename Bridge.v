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
    input [31:0] PrAddr,
	 input [31:0] PrWD,
    output [31:0] PrRD,
	 input PrWe,
	 
	 output [31:0] DEV_Addr,//Address
	 input [31:0] DEV0_RD,//Read Device
	 input [31:0] DEV1_RD,
	 input [31:0] DEV2_RD,
	 input [31:0] DEV3_RD,
	 
	 output [31:0] DEV_WD,//Write Device
	 output WeDEV0,
	 output WeDEV1,
	 output WeDEV2,
	 output WeDEV3
    );
	
	wire HitDEV0 = PrAddr==0;//##############
	wire HitDEV1 = 0;
	wire HitDEV2 = 0;
	wire HitDEV3 = 0;
	
	assign PrRD = HitDEV0 ? DEV0_RD:
					  HitDEV1 ? DEV1_RD:
					  HitDEV2 ? DEV2_RD:
					  HitDEV3 ? DEV3_RD:
									  32'b0;
	
	assign DEV_Addr = PrAddr;//###############
	
	assign DEV_WD = PrRD;
	
	assign WeDEV0 = PrWe & HitDEV0;
	assign WeDEV1 = PrWe & HitDEV1;
	assign WeDEV2 = PrWe & HitDEV2;
	assign WeDEV3 = PrWe & HitDEV3;
	

endmodule
