`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:13:57 11/04/2020
// Design Name:   fast_adder4
// Module Name:   D:/HZIEE/2-COCP/2-Prac/P1-1/fast_adder_4/fast_adder/fast_tb.v
// Project Name:  fast_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fast_adder4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fast_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg c_in;

	// Outputs
	wire [3:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	fast_adder4 uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);


	initial begin
		a=4'b0000;
		b=4'b0000;
		c_in=0;
	end
	always #5 c_in=c_in+1;
	always #10 a=a+1;
	always #160 b=b+1;
      
endmodule

