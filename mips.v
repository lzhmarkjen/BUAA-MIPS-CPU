`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:39 11/16/2018 
// Design Name: 
// Module Name:    mips 
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
module mips(
	 input clk,
	 input reset
    );
	 
	 wire [31:0] PrAddr,PrWD,PrRD,DEV0_RD,DEV1_RD,DEV_WD;
	 wire [7:2] HWInt;
	 wire PrWe,WeDEV0,WeDEV1;;
	 wire [3:0]DEV_Addr;
	 cpu cpu(
    .clk(clk),
    .reset(reset),
	 .HWInt(HWInt),//
    .PrAddr(PrAddr),
    .PrWD(PrWD),
    .PrRD(PrRD),
    .PrWe(PrWe)
    );
	 
	 Bridge Bridge(
    .PrAddr(PrAddr),
    .PrWD(PrWD), 
    .PrRD(PrRD), 
    .PrWe(PrWe), 
    .DEV_Addr(DEV_Addr), 
    .DEV0_RD(DEV0_RD), 
    .DEV1_RD(DEV1_RD), 
    .DEV_WD(DEV_WD), 
    .WeDEV0(WeDEV0), 
    .WeDEV1(WeDEV1)
    );

	 
	 Timer_Counter TC0(
	 .clk(clk),
	 .reset(reset),
	 .Addr_In(DEV_Addr),
	 .WE(WeDEV0),
	 .Data_In(DEV_WD),
	 .Data_Out(DEV0_RD),
	 .IRQ(HWInt[2:2])
	 );
	 
	 Timer_Counter TC1(
	 .clk(clk),
	 .reset(reset),
	 .Addr_In(DEV_Addr),
	 .WE(WeDEV1),
	 .Data_In(DEV_WD),
	 .Data_Out(DEV1_RD),
	 .IRQ(HWInt[3:3])
	 );
	 
	 assign HWInt[7:4] = 4'b0;
endmodule
