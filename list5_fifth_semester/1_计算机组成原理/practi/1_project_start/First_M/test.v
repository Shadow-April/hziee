`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:41:54 09/03/2020
// Design Name:   First_M
// Module Name:   D:/HZIEE/2-COCP/First_M/test.v
// Project Name:  First_M
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: First_M
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
	reg A;
	reg B;
	reg C;
	reg D;
	reg E;

	// Outputs
	wire F;

	// Instantiate the Unit Under Test (UUT)
	First_M uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		D = 0;
		E = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A = 0;
		B = 0;
		C = 1;
		D = 1;
		E = 1;
		
		#100;
		A = 1;
		B = 1;
		C = 1;
		D = 0;
		E = 1;
		
		#100;
		A = 1;
		B = 1;
		C = 1;
		D = 1;
		E = 1;

	end
      
endmodule

