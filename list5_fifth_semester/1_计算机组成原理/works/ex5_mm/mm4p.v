`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:23 12/08/2020 
// Design Name: 
// Module Name:    mm4p 
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
module mm4p(ADDR_SW,SEL_D_B,Mem_Write,Clk,LED);

	reg [7:2] Mem_Addr;
	reg [31:0] Data;
	input [7:2] ADDR_SW;
	input [1:0] SEL_D_B; 
	input Mem_Write,Clk;
	output reg [7:0]LED;
	reg [31:0] W_Data;
	reg [31:0] M_W_Data;
	wire [31:0] M_R_Data;

	always@(*)
		begin
			if(Mem_Write == 0)
				begin
				// choose read address by addr_sw
				
						case(SEL_D_B)	// Choose Byte to Show
							2'b00: begin LED=M_R_Data[7:0]; end
							2'b01: begin LED=M_R_Data[15:8]; end
							2'b10: begin LED=M_R_Data[23:16]; end
							2'b11: begin LED=M_R_Data[31:24]; end
						endcase
				end
				
			else
				// choose data to write
				begin
						case(SEL_D_B)
							2'b00: begin W_Data=32'h0000_0000; end
							2'b01: begin W_Data=32'h1000_0001; end
							2'b10: begin W_Data=32'h8000_1111; end
							2'b11: begin W_Data=32'h7FFF_FFFF; end
						endcase
	
						M_W_Data<=W_Data;
				end
		end


RAM_B DATA_RAM (
		.clka(Clk), // input clka
		.wea(Mem_Write), // input [0 : 0] wea
		.addra(ADDR_SW), // input [5 : 0] addra
		.dina(M_W_Data), // input [31 : 0] dina
		.douta(M_R_Data) // output [31 : 0] douta
);

endmodule
