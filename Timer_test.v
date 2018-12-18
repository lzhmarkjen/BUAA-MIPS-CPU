`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:18:33 12/15/2018
// Design Name:   Timer_Counter
// Module Name:   G:/ComputerOrganization/CPU/Timer_test.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Timer_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Timer_test;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] Addr_In;
	reg WE;
	reg [31:0] Data_In;

	// Outputs
	wire [31:0] Data_Out;
	wire IRQ;

	// Instantiate the Unit Under Test (UUT)
	Timer_Counter uut (
		.clk(clk), 
		.reset(reset), 
		.Addr_In(Addr_In), 
		.WE(WE), 
		.Data_In(Data_In), 
		.Data_Out(Data_Out), 
		.IRQ(IRQ)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		Addr_In = 4'h4;
		WE = 1;
		Data_In = 32'd5;
	#10;
		Addr_In = 4'h0;
		WE = 1;
		Data_In = 32'b1001;
	#10;
		WE = 0;
	#80;
		Addr_In = 4'h0;
		WE = 1;
		Data_In = 32'b1010;
	#10;
		WE = 0;
	#80;
		Addr_In = 4'h0;
		WE = 1;
		Data_In = 32'b1011;      
	#10;
		WE = 0;
	end
      always #5 clk=~clk;
endmodule

