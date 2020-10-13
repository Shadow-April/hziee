`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:35 10/13/2020 
// Design Name: 
// Module Name:    DFF1 
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
module DFF1(CLK, D, Q);
	output Q;
	input CLK, D;
	reg Q;
	always @ ( posedge CLK )
		Q <= D;

endmodule
