`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:36 10/15/2020 
// Design Name: 
// Module Name:    four_bit_full_adder 
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
module four_bit_full_adder(A,B,CI,S,CO);
	parameter SIZE = 4;
	input [SIZE-1:0] A,B;
	output [SIZE-1:0] S;
	input CI;
	output CO;
	
	wire [SIZE-1:1] C;
	
	adder FA0(A[0],B[0],CI,S[0],C[1]),
			FA1(A[1],B[1],C[1],S[1],C[2]),
			FA2(A[2],B[2],C[2],S[2],C[3]),
			FA3(A[3],B[3],C[3],S[3],CO);

endmodule
