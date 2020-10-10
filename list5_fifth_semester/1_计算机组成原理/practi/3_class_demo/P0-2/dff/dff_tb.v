`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:22:00 10/10/2020
// Design Name:   dff
// Module Name:   D:/HZIEE/2-COCP/ChipVerify/P0-3/dff/dff_tb.v
// Project Name:  dff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dff_tb;
	reg clk;
	reg d;
	reg rstn;
	reg [2:0] delay;

    dff  dff0 ( d,
                rstn,
                clk,
                q);

    // Generate clock
    always #10 clk = ~clk;

    // Testcase
    initial begin
    	clk <= 0;
    	d <= 0;
    	rstn <= 0;

    	#15 d <= 1;
    	#10 rstn <= 1;
    	delay = 100;
    	#(delay) d <= 1;
		
		delay = 100;
    	#(delay) d <= 2;
		
		delay = 100;
    	#(delay) d <= 3;
		
		delay = 100;
    	#(delay) d <= 4;
		
		delay = 100;
    	#(delay) d <= 5;
    end
endmodule