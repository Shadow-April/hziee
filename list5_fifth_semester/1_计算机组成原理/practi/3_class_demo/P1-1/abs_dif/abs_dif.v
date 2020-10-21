`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:02 10/21/2020 
// Design Name: 
// Module Name:    abs_dif 
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
module abs_dif(aIn,bIn,out);
   parameter N=4;
   input [N-1:0] aIn, bIn;
   output[N-1:0] out;
   wire agb;
	//comp #(4)comp_inst( .a(aIn), .b(bIn), .agb(agb), .aeb(), .alb());
	comp #(4) comp_inst(aIn,bIn);
	wire[N-1:0] Max,Min;
	//mux21 #(4) mux1(.in0(aIn), .in1(bIn), .sel(~agb),.out(Max));
	mux21 #(4) mux1(aIn,bIn,~agb,Max);
	//mux21 #(4) mux2(.in0(aIn), .in1(bIn), .sel(agb),.out(Min));
	mux21 #(4) mux2(aIn,bIn,agb,Min);
	wire[2:0] c;

full_adder4b adder0(Max[0], ~Min[0], out[0], 1'b1,c[0]);
full_adder4b adder1(.a(Max[1]),.b(~Min[1]), .s(out[1]), .ci(c[0]),.co(c[1]));
full_adder4b adder2(.a(Max[2]),.b(~Min[2]), .s(out[2]), .ci(c[1]),.co(c[2]));
full_adder4b adder3(.a(Max[3]),.b(~Min[3]), .s(out[3]), .ci(c[2]),.co() );

endmodule
