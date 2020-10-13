`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:31:44 10/13/2020 
// Design Name: 
// Module Name:    DFF2 
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
module DFF2(CLK,D,Q,RST);
	input D,CLK,RST;
	output Q;
	reg Q;
	always @(posedge CLK)
		if(RST==1) Q = 0;
	else if(RST==0) Q = D;
	else Q = Q;

endmodule
