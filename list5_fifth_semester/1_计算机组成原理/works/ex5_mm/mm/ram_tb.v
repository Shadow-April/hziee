`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:35:01 11/17/2020
// Design Name:   ram
// Module Name:   D:/HZIEE/2-COCP/works/1-final/ex5_mm/mm/ram_tb.v
// Project Name:  mm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ram_tb;

	// Inputs
	reg clk;
	reg [0:0] wea;
	reg [7:2] addr;
	reg [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	ram uut (
		.clk(clk), 
		.wea(wea), 
		.addr(addr), 
		.dina(dina), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		wea = 0;
		addr = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
      clk = 0;
		wea = 0;
		addr = 6'b000001;
		dina = 32'b11111111110001111111111101101111;
		
		#100;
      clk = 1;
		wea = 0;
		addr = 6'b000001;
		dina = 32'b11111111110001111111111101101111;
		
		
		#100;
      clk = 0;
		wea = 0;
		addr = 6'b000001;
		dina = 32'b11111111110001111111111101101111;
		
		
		#100;
      clk = 1;
		wea = 1;
		addr = 6'b000001;
		dina = 32'b11111111110001111111111101101111;
		
		
		// Add stimulus here

	end
      
endmodule

