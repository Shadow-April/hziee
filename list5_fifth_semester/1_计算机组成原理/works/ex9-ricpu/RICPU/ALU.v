`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:58:46 12/16/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ALU_OP,A,B,F,ZF,OF);
	  input  [2:0] ALU_OP;
	  input  [31:0] A;
	  input  [31:0] B;
	  output [31:0] F;
	  output  ZF;
	  output  OF;
	  reg [31:0] F;
	  reg    C,ZF;
	  
	  always@(*)
	  begin
		C=0;
		case(ALU_OP)
			3'b000:begin F=A&B; end
			3'b001:begin F=A|B; end
			3'b010:begin F=A^B; end
			3'b011:begin F=~(A|B); end 
			3'b100:begin {C,F}=A+B; end 
			3'b101:begin {C,F}=A-B; end 
			3'b110:begin F=A<B; end
			3'b111:begin F=B<<A; end
		endcase
		ZF = F==0;	// ZF = F==0?1:0
		end
		assign OF = ((ALU_OP==3'b100)||(ALU_OP==3'b101))&&(A[31] ^ B[31] ^ F[31] ^ C); 
endmodule
