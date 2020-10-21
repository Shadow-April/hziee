`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:38:35 10/21/2020 
// Design Name: 
// Module Name:    mux21 
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
module mux21(in0,in1,sel,out);
	input [3:0] in0;
	input [3:0] in1;
	input sel;
	
	output [3:0] out;
	
	assign out = (sel==0) ? in0 : in1;

endmodule
