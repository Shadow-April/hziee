`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:19 11/14/2020 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(A,B,C,F,Ci);
	input A,B,C;
	output F,Ci;
	wire A,B,C,F,Ci;
	wire S1,S2,S3;
	xor XU1(F,A,B,C),
		 XU2(S1,A,B);
		 
	and AU1(S2,A,B),
		 AU2(S3,S1,C);
	or  OU1(Ci,S2,S3);

endmodule
