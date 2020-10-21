`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:17:40 10/21/2020 
// Design Name: 
// Module Name:    adder_pro 
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
module adder_pro(x, y, s, cout, overflow);
	 
  parameter n=4;
  input [n-1:0] x;
  input [n-1:0] y;
  output reg[n-1:0] s;
  output reg cout;
  output reg overflow;
  reg [n:0] c;
  integer k;


  always @(x,y) begin
    c[0] = 1'b0;
	 for(k = 0; k < n; k = k + 1) begin
	   s[k] = x[k]^y[k]^c[k];
		c[k+1] = (x[k]&y[k])|(x[k]&c[k])|(y[k]&c[k]);
	 end
	 cout = c[n];
	 overflow = (x[n-1]&y[n-1]&~s[n-1])|(~x[n-1]&~y[n-1]&s[n-1]);
	end

endmodule
