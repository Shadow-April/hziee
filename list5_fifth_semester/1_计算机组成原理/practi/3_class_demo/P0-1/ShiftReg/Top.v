`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:56 10/01/2020 
// Design Name: 
// Module Name:    Top 
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
module Top(
    input clk,
    input clr,
    input Din,
    output [3:0] Q
    );
	 wire mclk;
	 clk_divf U1 (clk,mclk);
	 ShiftReg_M U2 (mclk,clr,Din,Q);

endmodule
