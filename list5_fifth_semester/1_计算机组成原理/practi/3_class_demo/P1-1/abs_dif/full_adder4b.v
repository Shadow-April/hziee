`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:04:35 10/21/2020 
// Design Name: 
// Module Name:    full_adder4b 
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
module full_adder4b(a,b,s,ci,co);
	parameter SIZE = 4;
	input [SIZE-1:0] a,b;
	output [SIZE-1:0] s;
	input ci;
	output co;
	
	wire [SIZE-1:1] c;
	
	adder1b FA0(a[0],b[0],s[0],ci,c[1]),
			  FA1(a[1],b[1],s[1],c[1],c[2]),
			  FA2(a[2],b[2],s[2],c[2],c[3]),
			  FA3(a[3],b[3],s[3],c[3],co);

endmodule
