`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:42 10/11/2020 
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
module MUX41a(a,b,c,d,s0,s1,y);
	input a,b,c,d;
	input s0,s1;
	output y;
	
	reg y;
	
	always @(a or b or c or d or s0 or s1)
		begin	:	MUX41
			case({s0,s1})
				2'b00: y<=a;
				2'b01: y<=b;
				2'b10: y<=c;
				2'b11: y<=d;
				default:	y<=a;
			endcase
		end
endmodule
