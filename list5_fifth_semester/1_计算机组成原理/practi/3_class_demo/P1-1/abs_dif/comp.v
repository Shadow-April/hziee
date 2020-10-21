`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:27:41 10/21/2020 
// Design Name: 
// Module Name:    comp 
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
module comp(a,b,agb,aeb,alb);
	parameter N=4;
	input [N-1:0] a,b;
   output reg agb,aeb,alb;

   always @(a or b)
      begin
         if(a==b) aeb=1;
         else aeb=0;
         if(a>b) agb=1;
         else agb=0;
         if(a<b) alb=1;
         else alb=0;
      end
		
endmodule
