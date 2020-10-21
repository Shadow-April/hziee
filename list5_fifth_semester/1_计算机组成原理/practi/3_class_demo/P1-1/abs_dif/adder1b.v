`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:09 10/21/2020 
// Design Name: 
// Module Name:    adder1b 
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
module adder1b(a,b,s,ci,co);
	
	input a,b,ci;
	output s,co;
	assign s = a^b^ci;
	assign co = (a&b)|((a^b)&ci);

endmodule
