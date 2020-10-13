`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:59 10/12/2020 
// Design Name: 
// Module Name:    h_adder 
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
module h_adder(a,,b,so,co);
	input a,b;
	output so,co;
	assign so=a^b;
	assign co=a&b;

endmodule
