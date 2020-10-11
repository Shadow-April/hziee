`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:59 10/10/2020 
// Design Name: 
// Module Name:    a_and_b 
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
module a_and_b( input a,
					 input b,
					 output q
    );

		wire a,b,q;
		assign q=a&b;

endmodule
