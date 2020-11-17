`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:45:26 11/17/2020
// Design Name:   regs
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex4_regs/regs/regs_tb.v
// Project Name:  regs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regs
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regs_tb;

	// Inputs
	reg [4:0] R_Addr_A;
	reg [4:0] R_Addr_B;
	reg Clk;
	reg [4:0] W_Addr;
	reg [32:0] W_Data;
	reg Reset;
	reg Write_reg;

	// Outputs
	wire [0:31] R_Data_A;
	wire [0:31] R_Data_B;

	// Instantiate the Unit Under Test (UUT)
	regs uut (
		.R_Addr_A(R_Addr_A), 
		.R_Addr_B(R_Addr_B), 
		.Clk(Clk), 
		.W_Addr(W_Addr), 
		.W_Data(W_Data), 
		.R_Data_A(R_Data_A), 
		.R_Data_B(R_Data_B), 
		.Reset(Reset), 
		.Write_reg(Write_reg)
	);

	initial begin
		// Initialize Inputs
		R_Addr_A = 0;
		R_Addr_B = 0;
		Clk = 0;
		W_Addr = 0;
		W_Data = 0;
		Reset = 0;
		Write_reg = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Clk = 1;
		Reset = 0;
		R_Addr_A = 0;
		R_Addr_B = 0;
		W_Addr = 5'b00001;
		Write_reg = 1;
		W_Data = 32'h1111_1111;
		
		#100;
      Clk = 0;
		Reset = 0;
		R_Addr_A = 0;
		R_Addr_B = 0;
		W_Addr = 5'b00001;
		Write_reg = 1;
		W_Data = 32'h1111_1111;
		
		#100;
      Clk = 1;
		Reset = 0;
		R_Addr_A = 0;
		R_Addr_B = 0;
		W_Addr = 5'b00010;
		Write_reg = 1;
		W_Data = 32'h2222_2222;
		
		#100;
      Clk = 0;
		Reset = 0;
		R_Addr_A = 5'b00001;
		R_Addr_B = 5'b00010;
		W_Addr = 0;
		Write_reg = 0;
		W_Data = 0;
		
		#100;
      Clk = 0;
		Reset = 1;
		R_Addr_A = 5'b00001;
		R_Addr_B = 5'b00010;
		W_Addr = 0;
		Write_reg = 0;
		W_Data = 0;
				
		// Add stimulus here

	end
      
endmodule

