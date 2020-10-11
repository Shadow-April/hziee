`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:30:27 10/11/2020 
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
	wire AT = S0 ? D : C;
	wire BT = S0 ? B : A;
	wire Y = (S1 ? AT : BT);

endmodule
