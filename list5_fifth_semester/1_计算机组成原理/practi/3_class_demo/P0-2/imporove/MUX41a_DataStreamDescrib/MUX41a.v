`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:34 10/11/2020 
// Design Name: 
// Module Name:    MUX41a 
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
module MUX41a(a,b,c,d,s1,s0,y);
	input a,b,c,d,s1,s0;
	output y;
	wire [1:0] SEL;
	wire AT, BT, CT, DT;
	// assign lead the sync sentence no matter how many sentence there are.
	assign SEL = {s1,s0};
	assign AT = (SEL==2'D0);
	assign BT = (SEL==2'D1);
	assign CT = (SEL==2'D2);
	assign DT = (SEL==2'D3);
	assign y = (a & AT) | (b & BT) | (c & CT) | (d & DT);

endmodule

