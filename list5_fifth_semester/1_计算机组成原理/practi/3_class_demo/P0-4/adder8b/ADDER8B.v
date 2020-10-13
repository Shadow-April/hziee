`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:58 10/13/2020 
// Design Name: 
// Module Name:    ADDER8B 
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
module ADDER8B(A,B,CIN,COUT,DOUT);
	output [7:0] DOUT;
	output COUT;
	input [7:0] A,B;
	input CIN;
	wire [8:0] DATA;
	assign DATA = A + B + CIN;
	assign COUT = DATA[8];
	assign DOUT = DATA[7:0];

endmodule
