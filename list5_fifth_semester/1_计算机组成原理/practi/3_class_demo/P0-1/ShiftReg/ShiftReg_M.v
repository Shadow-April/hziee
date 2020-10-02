`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:23:48 10/01/2020 
// Design Name: 
// Module Name:    ShiftReg_M 
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
module ShiftReg_M(
	input wire clk,
	input wire clr,
	input wire Din,
	output reg [3:0] Q
);

	always @(posedge clk or posedge clr)
	begin
		if(clr == 1)
			Q <= 0;
		else
			begin
				Q[0] <= Din;
				Q[3:1] <= Q[2:0];
			end
	end

endmodule
