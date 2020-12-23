`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:58:17 12/16/2020 
// Design Name: 
// Module Name:    GPRs 
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
module GPRs(R_Data_A,R_Data_B,W_Data,R_Addr_A,R_Addr_B,W_Addr,rd_rt_s,rt_imm_s,imm_s,Write_Reg,rst,clk);
	 input clk;//WRITE
    input rst;//RESET
    input Write_Reg;//WRITE CONTROL
    input [4:0]R_Addr_A;//PORT A READ REGISTER ADDRESS
    input [4:0]R_Addr_B;//PORT A READ REGISTER ADDRESS
    input [4:0]W_Addr;//WRITE REGISTER ADDRESS
    input [31:0]W_Data;//WRITE DATA
	 output [31:0]R_Data_A;//READ DATA FROM PORT A
    output [31:0]R_Data_B;//READ DATA FROM PORT B
	 
	 // FOR INST TYPE I
	 output reg rd_rt_s;
	 output reg rt_imm_s;
	 output reg imm_s;
	 // END FOR I
	 
	 integer i;
	 reg [31:0] REG_Files[0:31];  
    initial
        for(i=0;i<32;i=i+1) REG_Files[i]<=0;
    always@(posedge clk or posedge rst)
    begin
        if(rst)
                for(i=0;i<32;i=i+1) REG_Files[i]<=0;
        else
                if(Write_Reg&&W_Addr!=32'd0) REG_Files[W_Addr]<=W_Data;
    end
	 // IF INST BELONG R -->
    assign R_Data_A=REG_Files[R_Addr_A];
    assign R_Data_B=REG_Files[R_Addr_B];

	// ELSE IF INST BELONG I -->
	
	
	// ELSE IF INST BELONG J -->
	
endmodule
