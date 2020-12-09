`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:36:03 12/09/2020
// Design Name:   TKINS
// Module Name:   E:/home/shadow/hziee/2-COCP/works/1-final/ex6_mips/source_code/MOVINS/TEST.v
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

module TEST;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] Inst_code;
	wire [31:0] PC;
	wire [31:0] PC_new;
	wire [5:0] op_code;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire [15:0] imm;
	wire [5:0] func;
	wire [15:0] offset;
	wire [25:0] address;

	// Instantiate the Unit Under Test (UUT)
	TKINS uut (
		.clk(clk), 
		.rst(rst), 
		.Inst_code(Inst_code), 
		.PC(PC), 
		.PC_new(PC_new), 
		.op_code(op_code), 
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
		clk = 0;
		rst = 1;
		#25;
		rst = 0;
		
		// Wait 100 ns for global reset to finish
		#500;
      rst = 1;
		#50;
		rst = 0;
		#500;
		// Add stimulus here

	end
      
endmodule

