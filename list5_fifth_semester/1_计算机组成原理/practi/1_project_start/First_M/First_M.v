`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:44 09/03/2020 
// Design Name: 
// Module Name:    First_M 
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
module First_M(A,B,C,D,E,F);
	input A,B,C,D,E;
	output F;
	wire A,B,C,D,E,F;
	
	assign F=~((A&B&C)|(D&E));

endmodule
