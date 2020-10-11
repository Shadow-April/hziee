`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:50:03 10/10/2020 
// Design Name: 
// Module Name:    dff 
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
module dff 	( input d,
              input rstn,
              input clk,
              output reg q);

	always @ (posedge clk or negedge rstn)
       if (!rstn)
          q <= 0;
       else
          q <= d;
endmodule

