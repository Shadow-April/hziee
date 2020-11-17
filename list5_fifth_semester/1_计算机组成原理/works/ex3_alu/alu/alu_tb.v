`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:56:25 11/17/2020
// Design Name:   alu
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex3_alu/alu/alu_tb.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [2:0] ALU_OP;
	reg [2:0] AB_SW;

	// Outputs
	wire OF;
	wire ZF;
	wire F;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.ALU_OP(ALU_OP), 
		.AB_SW(AB_SW), 
		.OF(OF), 
		.ZF(ZF), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		ALU_OP = 0;
		AB_SW = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #100;
		ALU_OP = 001;
		AB_SW = 001;
		
		// Add stimulus here
		#100;
		ALU_OP = 010;
		AB_SW = 010;
		
		#100;
		ALU_OP = 011;
		AB_SW = 011;
		
		#100;
		ALU_OP = 100;
		AB_SW = 100;
		
		#100;
		ALU_OP = 101;
		AB_SW = 101;
		
		#100;
		ALU_OP = 110;
		AB_SW = 110;
		
		#100;
		ALU_OP = 111;
		AB_SW = 111;
		
		#100;
		ALU_OP = 0;
		AB_SW = 0;
		
		#100;
		ALU_OP = 0;
		AB_SW = 0;
		
	end
      
endmodule

