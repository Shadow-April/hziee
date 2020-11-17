`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:14:49 11/17/2020
// Design Name:   mm
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex5_mm/mm/mm_tb.v
// Project Name:  mm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mm_tb;

	// Inputs
	reg [4:0] R_Addr_A;
	reg [4:0] R_Addr_B;
	reg Clk;
	reg [4:0] W_Addr;
	reg [31:0] W_Data;
	reg Reset;
	reg Write_reg;
	reg wea;
	reg [7:2] addr;

	// Outputs
	wire [31:0] R_Data_A;
	wire [31:0] R_Data_B;
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	mm uut (
		.R_Addr_A(R_Addr_A), 
		.R_Addr_B(R_Addr_B), 
		.Clk(Clk), 
		.W_Addr(W_Addr), 
		.W_Data(W_Data), 
		.R_Data_A(R_Data_A), 
		.R_Data_B(R_Data_B), 
		.Reset(Reset), 
		.Write_reg(Write_reg), 
		.wea(wea), 
		.addr(addr), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		R_Addr_A = 0;
		R_Addr_B = 0;
		Clk = 0;
		W_Addr = 0;
		W_Data = 0;
		Reset = 1;
		Write_reg = 0;
		wea = 0;
		addr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Reset = 0;
		Clk = 0;
		#100;
		W_Addr = 5'b11011;
		W_Data = 32'b11111111110001111111111101101111;
		Write_reg = 1;
		Clk = 0;
		#50;
		Clk = 1;
		#100;
		R_Addr_A = 5'b11011;
		R_Addr_B = 0;
		Clk = 0;
		Write_reg = 0;
		#100;
		R_Addr_A = 5'b11011;
		Write_reg = 0;
		Clk = 0;
		W_Addr = 0;
		W_Data = 0;
		#10;
		Clk = 0;
		wea = 1;
		addr = 8'b00110100;
		#10;
		Clk = 1;
		#100;
		wea = 0;
		addr = 8'b00110100;
		#100;
		Clk = 0;
		#10;
		Clk = 1;
		
		// Add stimulus here

	end
      
endmodule

