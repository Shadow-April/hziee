`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:24:09 10/13/2020 
// Design Name: 
// Module Name:    f_adder 
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
module f_adder(ain,bin,cin,cout,sum);
	output cout,sum;
	input ain,bin,cin;
	wire e,d,f;
	h_adder u1( ain, bin, e, d);
	h_adder u2(.a(e), .so(sum), .b(cin), .co(f));
	or2a u3(.a(d), .b(f), .c(cout));

endmodule
