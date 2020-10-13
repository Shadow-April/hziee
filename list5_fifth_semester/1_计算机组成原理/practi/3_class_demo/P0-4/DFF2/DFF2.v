`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:23:40 10/13/2020 
// Design Name: 
// Module Name:    DFF2 
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
module DFF2(CLK,D,Q,RST,EN);
	output Q;
	input CLK,D,RST,EN;
	reg Q;
		always @(posedge CLK or negedge RST )
		begin
			if(!RST) Q <= 0;
		else if(EN) Q <= D;
		end

endmodule
