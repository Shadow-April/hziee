`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:12:28 12/16/2020
// Design Name:   RI_CPU
// Module Name:   E:/home/shadow/hziee/2-COCP/works/1-final/ex9_ricpu/RICPU/RI_CPU_TB.v
// Project Name:  RICPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RI_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RI_CPU_TB;

	// Inputs
	reg clk_ram;
	reg clk;
	reg rst;

	// Outputs
	wire rd_rt_s;
	wire rt_imm_s;
	wire imm_s;
	wire [31:0] Inst_code;
	wire [31:0] PC;
	wire [5:0] opcode;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] shamt;
	wire [5:0] func;
	wire [15:0] imm;
	wire [31:0] ALU_F;
	wire FR_ZF;
	wire FR_OF;
	wire [2:0] ALU_OP;
	wire rs_shamt;
	wire [31:0] ALU_A;
	wire [31:0] ALU_B;

	// Instantiate the Unit Under Test (UUT)
	RI_CPU uut (
		.clk_ram(clk_ram),
		.clk(clk), 
		.rst(rst), 
		.rd_rt_s(rd_rt_s), 
		.rt_imm_s(rt_imm_s), 
		.imm_s(imm_s), 
		.Inst_code(Inst_code), 
		.PC(PC), 
		.opcode(opcode), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.shamt(shamt), 
		.func(func), 
		.imm(imm), 
		.ALU_F(ALU_F), 
		.FR_ZF(FR_ZF), 
		.FR_OF(FR_OF), 
		.ALU_OP(ALU_OP), 
		.rs_shamt(rs_shamt), 
		.ALU_A(ALU_A), 
		.ALU_B(ALU_B)
	);

	always #50 clk_ram=~clk_ram;
	initial begin
		// Initialize Inputs
		clk_ram=0;
		clk = 0;
		rst=1;
		#50;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

