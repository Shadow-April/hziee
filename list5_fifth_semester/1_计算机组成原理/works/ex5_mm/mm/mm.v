`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:04 11/17/2020 
// Design Name: 
// Module Name:    mm 
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
module mm(
		R_Addr_A,
		R_Addr_B,
		Clk,
		W_Addr,
		W_Data,
		R_Data_A,
		R_Data_B,
		Reset,
		Write_reg,
		wea,
		addr,
		douta);
	input Clk;
	input Reset;
	input [4:0] R_Addr_A;
	input [4:0] R_Addr_B;
	input [4:0] W_Addr;
	output [31:0] R_Data_A;
	output [31:0] R_Data_B;
	input [31:0] W_Data;
	input wire Write_reg;
	input wire wea;
	input [7:2] addr;
	output [31:0] douta;
	
	regs FA0(
				.R_Addr_A(R_Addr_A),
				.R_Addr_B(R_Addr_B),
				.Clk(Clk),
				.W_Addr(W_Addr),
				.W_Data(W_Data),
				.Reset(Reset),
				.R_Data_A(R_Data_A),
				.R_Data_B(R_Data_B),
				.Write_reg(Write_reg));
				
	ram FA1(
				.wea(wea),
				.addr(addr[7:2]),
				.dina(R_Data_A),
				.douta(douta),
				.clk(Clk));

endmodule