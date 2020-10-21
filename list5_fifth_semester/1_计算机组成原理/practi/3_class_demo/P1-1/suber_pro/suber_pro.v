`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:26:39 10/21/2020 
// Design Name: 
// Module Name:    suber_pro 
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
module suber_pro(x, y, s, cout, overflow);
	 
  parameter n=4;
  input [n-1:0] x;
  input [n-1:0] y;
  output reg[n-1:0] s;
  output reg cout;
  output reg overflow;
  wire [n-1:0] y1;
  reg [n:0] c;
  integer k;

  //y commplement, if y=0, to negative with commplement,if y=1, to positive number. 
  assign y1 = y[n-1]?(~{y[n-1:0]}+1'b1):(~{1'b0,y[n-2:0]}+1'b1);

  always @(x,y1) begin
    c[0] = 1'b0;
	 for(k = 0; k < n; k = k + 1) begin
	   s[k] = x[k]^y1[k]^c[k];
		c[k+1] = (x[k]&y1[k])|(x[k]&c[k])|(y1[k]&c[k]);
	 end
	 cout = c[n];
	 overflow = (x[n-1]&y1[n-1]&~s[n-1])|(~x[n-1]&~y1[n-1]&s[n-1]);
	end

endmodule
