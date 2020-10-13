`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:25 10/12/2020 
// Design Name: 
// Module Name:    h_adder 
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
module h_adder(a,b,so,co);
	input a,b;
	output so,co;
	reg so,co;
	always @(a,b,so,co) 
		begin
			case({a,b})
				0: begin so=0; co=1'b0; end
				1: begin so=1; co=1'b0; end
				2: begin so=1; co=1'b0; end
				3: begin so=0; co=1'b1; end
				default: begin so=0; co=0; end
			endcase
		end

endmodule
