`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:33:43 11/14/2020 
// Design Name: 
// Module Name:    regs 
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
module regs(R_Addr_A,R_Addr_B,Clk,W_Addr,W_Data,R_Data_A,R_Data_B,Reset,Write_reg);
	input Clk,Reset;
	input wire Write_reg;
	input wire[4:0] R_Addr_A;
	input wire[4:0] W_Addr;
	input wire[4:0] R_Addr_B;
	input wire[32:0] W_Data;
	reg [31:0] REG_Files [31:0];
	output wire[0:31] R_Data_A;
	output wire[0:31] R_Data_B;
	
	integer i=0;
	
	always@(posedge Clk or posedge Reset)
	begin
		if(Reset)
			begin
				for(i=0;i<=31;i=i+1)
					REG_Files[i]<=32'b0;
			end
		else
			begin
				if(Write_reg) REG_Files[W_Addr]<=W_Data;
				
			end
		end
		
			assign R_Data_A = REG_Files[R_Addr_A];
			assign R_Data_B = REG_Files[R_Addr_B];
			


endmodule
