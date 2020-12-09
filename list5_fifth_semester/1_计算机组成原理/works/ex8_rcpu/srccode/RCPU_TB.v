`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:14:47 12/09/2020
// Design Name:   R_CPU
// Module Name:   E:/home/shadow/hziee/2-COCP/works/2-pract/doxc/ref-ex8/srccode/RCPU-Q/RCPU_TB.v
// Project Name:  RCPU-Q
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: R_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RCPU_TB;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] Inst_code;
	wire [31:0] PC;
	wire [5:0] opcode;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] shamt;
	wire [5:0] func;
	wire [31:0] ALU_F;
	wire FR_ZF;
	wire FR_OF;
	wire [2:0] ALU_OP;
	wire rs_shamt;
	wire [31:0] ALU_A;

	// Instantiate the Unit Under Test (UUT)
	R_CPU uut (
		.clk(clk), 
		.rst(rst), 
		.Inst_code(Inst_code), 
		.PC(PC), 
		.opcode(opcode), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.shamt(shamt), 
		.func(func), 
		.ALU_F(ALU_F), 
		.FR_ZF(FR_ZF), 
		.FR_OF(FR_OF), 
		.ALU_OP(ALU_OP), 
		.rs_shamt(rs_shamt), 
		.ALU_A(ALU_A)
	);

	always #50 clk=~clk;
	initial begin
		// Initialize Inputs
		// Wait 100 ns for global reset to finish
		clk=0;
		rst=1;
		#50;
		rst = 0;
		// Add stimulus here

	end
      
endmodule

