`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:44 10/21/2020 
// Design Name: 
// Module Name:    even_odd 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module even_odd(a,even,odd);
	input[7:0] a;
	output even,odd;
	assign even = ^a;
	assign odd = ~even;

endmodule
