`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:30:24 09/05/2020 
// Design Name: 
// Module Name:    Voting_M 
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
module Voting_M(A,B,C,D,E,F);
	input A,B,C,D,E;
	output F;
	wire A,B,C,D,E,F;
	assign F=((A&B&C)||(A&B&D)||(A&B&E)||(A&C&D)||(A&C&E)||(A&D&E)||(B&C&D)||(B&C&E)||(B&D&E)||(C&D&E));

endmodule
