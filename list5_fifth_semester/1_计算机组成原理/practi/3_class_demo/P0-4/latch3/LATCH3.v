`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:36:07 10/13/2020 
// Design Name: 
// Module Name:    LATCH3 
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
module LATCH3(CLK,D,Q,RST);
	output Q;
	input CLK,D,RST;
	assign Q=(!RST)? 0 : (CLK ? D:Q);	// Amazing code.!

endmodule
