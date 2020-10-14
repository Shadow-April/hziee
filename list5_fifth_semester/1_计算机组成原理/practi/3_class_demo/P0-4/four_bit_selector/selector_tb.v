`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:02:45 10/10/2020
// Design Name:   four_bit_ds
// Module Name:   D:/HZIEE/2-COCP/ChipVerify/P0-3/four_bit_selector/selector_tb.v
// Project Name:  four_bit_selector
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_ds
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module selector_tb;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;
	reg E0;
	reg E1;

	// Outputs
	wire F;

	// Instantiate the Unit Under Test (UUT)
	four_bit_ds uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E0(E0), 
		.E1(E1), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		A = 1;
		B = 0;
		C = 0;
		D = 0;
		E0 = 0;
		E1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 0;
		B = 1;
		C = 0;
		D = 0;
		E0 = 0;
		E1 = 1;
		
		#100;
      A = 0;
		B = 0;
		C = 1;
		D = 0;
		E0 = 1;
		E1 = 0;
		
		#100;
      A = 0;
		B = 0;
		C = 0;
		D = 1;
		E0 = 1;
		E1 = 0;
		
		#100;
      A = 1;
		B = 0;
		C = 0;
		D = 0;
		E0 = 1;
		E1 = 1;
		// Add stimulus here

	end
      
endmodule

