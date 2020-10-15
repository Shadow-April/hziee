`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:11:25 10/15/2020 
// Design Name: 
// Module Name:    adder 
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
module adder(A,B,CI,SO,CO);
	input A,B,CI;
	output SO,CO;
	
	assign SO = A ^ B ^ CI;
	assign CO = (A & B)|(( A ^ B )& CI);

endmodule
