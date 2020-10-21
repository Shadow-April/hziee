`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:44 10/21/2020
// Design Name:   comp
// Module Name:   D:/HZIEE/2-COCP/2-Prac/P1-1/abs_dif/comp_tb.v
// Project Name:  abs_dif
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comp_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire agb;
	wire aeb;
	wire alb;

	// Instantiate the Unit Under Test (UUT)
	comp uut (
		.a(a), 
		.b(b), 
		.agb(agb), 
		.aeb(aeb), 
		.alb(alb)
	);

	initial begin
		// Initialize Inputs
		a = 0;		b = 0;

		// Wait 100 ns for global reset to finish
		#100 
        a = 4'b0011;	b = 4'b1101;  
		#100  
        a = 4'b1011;	b = 4'b1101; 
		#100  
        a = 4'b1010;	b = 4'b1001;  
		#100  
        a = 4'b1111;	b = 4'b0001;
      #100  
        a = 4'b0101;	b = 4'b0101;  
		#100  
        a = 4'b0000;	b = 4'b0110;  
		#100  
        a = 4'b0011;	b = 4'b1110;  
		#100  
        a = 4'b0010;	b = 4'b1111; 
	 //#100  $stop; 
	end      
endmodule

