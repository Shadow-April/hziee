`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:28:06 11/14/2020
// Design Name:   carryfa
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex2_cfa/cfa/cfa_tb.v
// Project Name:  cfa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: carryfa
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cfa_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire C4;
	wire [3:0] F;

	// Instantiate the Unit Under Test (UUT)
	carryfa uut (
		.A(A), 
		.B(B), 
		.C0(C0), 
		.C4(C4), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A=1100;B=1011;C0=0;
		
		#100;
      A=1010;B=0010;C0=1;
		
		#100;
      A=1011;B=1101;C0=0;
		
		#100;
      A=1010;B=0010;C0=1;
		
		#100;
      A=0011;B=0100;C0=1;
		
		#100;
      A=1001;B=0001;C0=0;
		// Add stimulus here

	end
      
endmodule

