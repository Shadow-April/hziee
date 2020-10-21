`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:43:59 10/21/2020
// Design Name:   abs_dif
// Module Name:   D:/HZIEE/2-COCP/2-Prac/P1-1/abs_dif/abs_dif_tb.v
// Project Name:  abs_dif
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: abs_dif
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module abs_dif_tb;

wire[3:0] out;
reg[3:0]  a, b;
abs_dif  abs_dif1(a,b,out);

initial
begin
	    a = 4'd3;	b = 4'd12;
	#10	$display("| %d - %d |= %d", a, b, out);
	#10	a = 4'd10;	b = 4'd4;
	#10	$display("| %d - %d |= %d", a, b, out);
	#10	a = 4'd5;	b = 4'd5;
	#10	$display("| %d - %d |= %d", a, b, out);
	#10	a = 4'd12;	b = 4'd0;
	#10	$display("| %d - %d |= %d", a, b, out);
	#10 $stop;
end
      
endmodule

