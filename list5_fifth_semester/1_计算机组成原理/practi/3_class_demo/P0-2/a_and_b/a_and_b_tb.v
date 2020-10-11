`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:07:55 10/10/2020
// Design Name:   a_and_b
// Module Name:   D:/HZIEE/2-COCP/ChipVerify/P0-3/a_and_b/a_and_b_tb.v
// Project Name:  a_and_b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: a_and_b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module a_and_b_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	a_and_b uut (
		.a(a), 
		.b(b), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 0;
		b = 1;
		
		#100;
		a = 1;
		b = 1;	
        
		// Add stimulus here

	end
      
endmodule

