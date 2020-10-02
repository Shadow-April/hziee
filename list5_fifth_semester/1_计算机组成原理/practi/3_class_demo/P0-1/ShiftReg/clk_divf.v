`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:39 10/01/2020 
// Design Name: 
// Module Name:    clk_divf 
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
module clk_divf(
    input clk_in,
    output reg clk_out
    );
	 reg [27:0] cnt;
	 always@(posedge clk_in)
		if(cnt == 50000000 - 1)
		begin
			cnt <= 0;
			clk_out <= ~clk_out;
		end
		else
			cnt <= cnt + 1;

endmodule
