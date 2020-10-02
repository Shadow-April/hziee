`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:28:54 10/01/2020
// Design Name:   ShiftReg_M
// Module Name:   D:/HZIEE/2-COCP/2-Prac/P0-1/ShiftReg/test.v
// Project Name:  ShiftReg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ShiftReg_M
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg clr;
	reg Din;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	ShiftReg_M uut (
		clk, 
		clr, 
		Din, 
		Q
	);

	initial begin
		clk = 0; forever #10 clk = ~clk;
	end

	initial begin
		Din = 0; forever #20 Din = ~Din;
	end

	initial begin
		clr = 1; #100; clr = 0;
	end
	
endmodule

