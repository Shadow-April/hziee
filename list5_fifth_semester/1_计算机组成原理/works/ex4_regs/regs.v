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
module regs(Clk,Reset,Write_reg,ADDR_SW,SEL_D_B,R_SEL,LED);

	// Write_reg: 0 : read register
	//				  1 : write register
	
	// ADDR_SW: choose address to read / write
	
	// SEL_D_B: if Write_reg == 0, choose which byte to show
	//				if Write_reg == 1, choose which data show write [pre define like 32b'0000xxxx...]
	
	// R_SEL: reading port select, to choose port A or B to show data
	
	// LED: 
	
	input Clk,Reset;
	input Write_reg;
	input R_SEL;
	input [4:0] ADDR_SW;
	input [1:0] SEL_D_B;

	reg [32:0] W_Data;
	reg [31:0] REG_Files [31:0];
	reg [31:0] R_Data_A;
	reg [31:0] R_Data_B;
	reg [7:0] LED;
	
	output LED;
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
				if(Write_reg) 
					begin
						case(SEL_D_B)
							2'b00: begin W_Data=32'h0000_0000; end
							2'b01: begin W_Data=32'h0000_0001; end
							2'b10: begin W_Data=32'h8000_1111; end
							2'b11: begin W_Data=32'h7FFF_FFFF; end
						endcase
	
						REG_Files[ADDR_SW]<=W_Data;
					end
				else				// Read Data
					begin	
						
						
			
						if(R_SEL)	// Read Data Port_A
							begin
								R_Data_A = REG_Files[ADDR_SW];
								case(SEL_D_B)	// Choose Byte to Show
									2'b00: begin LED=R_Data_A[7:0]; end
									2'b01: begin LED=R_Data_A[15:8]; end
									2'b10: begin LED=R_Data_A[23:16]; end
									2'b11: begin LED=R_Data_A[31:24]; end
								endcase
							end		// Read Data Port_A end
						else			// Read Data Port_B
							begin
								R_Data_B = REG_Files[ADDR_SW];
								case(SEL_D_B)	// Choose Byte to Show
									2'b00: begin LED=R_Data_B[7:0]; end
									2'b01: begin LED=R_Data_B[15:8]; end
									2'b10: begin LED=R_Data_B[23:16]; end
									2'b11: begin LED=R_Data_B[31:24]; end
								endcase
							end			// Read Data Port_B else end	
					end				// Read Data end
				end
			end


endmodule
