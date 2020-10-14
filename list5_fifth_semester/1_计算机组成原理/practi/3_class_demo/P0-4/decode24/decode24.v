`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:35:47 10/14/2020 
// Design Name: 
// Module Name:    decode24 
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
module decode24(
	input wire [1:0] a,
	output reg [3:0] led
);

	always @ (a)
		begin 
			case(a)
				2'b00: led = 4'b0001;
				2'b01: led = 4'b0010;
				2'b10: led = 4'b0100;
				2'b11: led = 4'b1000;
			endcase
		end

endmodule
