`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:56:43 11/14/2020
// Design Name:   full_adder
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex1_fa/full_adder/full_adder_tb.v
// Project Name:  full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_tb;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire F;
	wire Ci;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.F(F), 
		.Ci(Ci)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A=0;B=0;C=0;

		#100;
      A=0;B=0;C=1;
		
		#100;
      A=0;B=1;C=0;
		
		#100;
      A=0;B=1;C=1;
		
		#100;
      A=1;B=0;C=0;
		
		#100;
      A=1;B=0;C=1;
		
		#100;
      A=1;B=1;C=0;
		
		#100;
      A=1;B=1;C=1;
		
		// Add stimulus here

	end
      
endmodule

