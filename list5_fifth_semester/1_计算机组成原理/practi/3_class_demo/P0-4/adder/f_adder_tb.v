`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:28:09 10/13/2020
// Design Name:   f_adder
// Module Name:   D:/HZIEE/2-COCP/ChipVerify/P0-3/adder/f_adder_tb.v
// Project Name:  adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: f_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module f_adder_tb;

	// Inputs
	reg ain;
	reg bin;
	reg cin;

	// Outputs
	wire cout;
	wire sum;

	// Instantiate the Unit Under Test (UUT)
	f_adder uut (
		.ain(ain), 
		.bin(bin), 
		.cin(cin), 
		.cout(cout), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		ain = 0;
		bin = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
      ain = 1;
		bin = 0;
		cin = 0;
		
		#100;
      ain = 1;
		bin = 1;
		cin = 0;
		
		#100;
      ain = 1;
		bin = 1;
		cin = 1;
		
		#100;
      ain = 0;
		bin = 1;
		cin = 1;
		
		#100;
      ain = 0;
		bin = 0;
		cin = 1;
		
		#100;
      ain = 0;
		bin = 0;
		cin = 0;
		
		// Add stimulus here

	end
      
endmodule

