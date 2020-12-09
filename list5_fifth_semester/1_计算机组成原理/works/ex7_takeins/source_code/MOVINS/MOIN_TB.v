`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:20:41 12/09/2020
// Design Name:   TKINS
// Module Name:   E:/home/shadow/hziee/2-COCP/works/1-final/ex6_mips/source_code/MOVINS/MOIN_TB.v
// Project Name:  MOVINS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TKINS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MOIN_TB;

	// Inputs
	reg clk;
	reg rst;
	reg opcode;
	reg imm;
	reg offset;
	reg address;

	// Outputs
	wire [31:0] Inst_code;
	wire [31:0] PC;
	wire [31:0] PC_new;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire [5:0] func;

	// Instantiate the Unit Under Test (UUT)
	TKINS uut (
		.clk(clk), 
		.rst(rst), 
		.Inst_code(Inst_code), 
		.PC(PC), 
		.PC_new(PC_new), 
		.opcode(opcode), 
		.rs_addr(rs_addr), 
		.rt_addr(rt_addr), 
		.rd_addr(rd_addr), 
		.shamt(shamt), 
		.imm(imm), 
		.func(func), 
		.offset(offset), 
		.address(address)
	);

	always #50 clk = ~clk;
	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		clk = 1'b0;
		rst = 1'b1;
		#25;
		rst = 1'b0;
		// Add stimulus here

	end
      
endmodule

