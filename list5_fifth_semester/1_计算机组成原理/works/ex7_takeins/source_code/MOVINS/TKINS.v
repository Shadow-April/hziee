`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:41 12/09/2020 
// Design Name: 
// Module Name:    TKINS 
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
module TKINS(
			clk,
			rst,
			Inst_code,PC,PC_new,
			op_code,rs_addr,rt_addr,rd_addr,shamt,imm,func,offset,address
    );
	 
	 input clk;
	 input rst;
	 
	 output reg [31:0] PC;
	 output [31:0] PC_new;
	 output [31:0] Inst_code;
	 output [5:0] op_code,func;
	 output [4:0] rs_addr,rt_addr,rd_addr,shamt;
	 output [15:0] offset,imm;
	 output [25:0] address;
	 
	 initial PC = 32'h00000000;
	 
	 assign PC_new = PC+4;
	 always@(negedge clk)				// you can make rst sensitive [negedge clk or negedge rst]
	 begin
		if(rst) PC<=32'h00000000;
		PC = PC_new;
	 end


	Inst_ROM MI_ROM (
		.clka(clk), // input clka
		.addra(PC[7:2]), // input [5 : 0] addra    ----------------// there are some problems... just like addra(PC[7:2]) // IF you use PC, take inst will wrong
		.douta(Inst_code) // output [31 : 0] douta
	);

	assign op_code = Inst_code[31:26];
	assign rs_addr = Inst_code[25:21];
	assign rt_addr = Inst_code[20:16];
	assign rd_addr = Inst_code[15:11];
	assign shamt = Inst_code[10:6];
	assign func = Inst_code[5:0];
	
	assign imm = Inst_code[15:0];
	assign offset = Inst_code[15:0];
	assign address = Inst_code[25:0];
	

endmodule
