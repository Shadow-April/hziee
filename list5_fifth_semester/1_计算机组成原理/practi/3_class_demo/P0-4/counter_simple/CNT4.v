`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:18 10/14/2020 
// Design Name: 
// Module Name:    CNT4 
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
module CNT4(CLK,Q);
	input CLK;
	output [3:0] Q;
	reg [3:0] Q1;
	always @ (posedge CLK)
		begin Q1<=Q1+1; end
	
	assign Q=Q1;
		

endmodule
