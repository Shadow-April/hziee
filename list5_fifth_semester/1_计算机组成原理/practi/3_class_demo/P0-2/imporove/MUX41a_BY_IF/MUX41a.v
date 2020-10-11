`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:48 10/11/2020 
// Design Name: 
// Module Name:    MUX41a 
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
module MUX41a(A,B,C,D,S1,S0,Y);
	input A,B,C,D,S1,S0;
	output Y;
	reg [1:0] SEL;
	reg Y;
	always @(A,B,C,D,SEL) 
		begin
			SEL = {S1,S0};
			if(SEL==0) Y = A;
			else if(SEL==1) Y = B;
			else if(SEL==2) Y = C;
			else Y = D;
		end
endmodule
