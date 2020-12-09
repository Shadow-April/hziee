`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:44 12/09/2020 
// Design Name: 
// Module Name:    R_CPU 
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
module R_CPU(
	clk,rst,
    Inst_code,PC,
    opcode,rs,rt,rd,shamt,func,
	ALU_F,FR_ZF,FR_OF,ALU_OP,
	rs_shamt,ALU_A
    );
	input clk;//TIMER
    input rst;//RESET
	output reg [31:0]PC;//PC
    wire [31:0]PC_new;
    output [31:0]Inst_code;//TAKED INSTRUCTION
    output [5:0]opcode,func;//DIV INST
    output [4:0]rs,rt,rd,shamt;//DIV INST
	 wire [15:0]imm,offset;//DIV INST
	 wire [25:0]address;//DIV INST
     output [31:0] ALU_F;//ALU RESULT
	 output reg [2:0] ALU_OP;//ALU OP
	 output reg FR_ZF;
	 output reg  FR_OF;
	 wire ZF,OF;
	 output  [31:0]ALU_A;
	 reg Write_Reg;
	 wire [31:0]R_Data_A;
	 wire [31:0]R_Data_B;
	 reg Set_ZF;
	 reg Set_OF;
	 wire [31:0]shamt_kz;
	 output reg rs_shamt;
	 
	 assign shamt_kz={{16{1'b0}},shamt};
	 initial PC = 32'h00000000;
	 assign PC_new = PC + 4;
	 

ROMQ ROMI (
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(Inst_code) // output [31 : 0] douta
);
	always @(negedge clk or posedge rst)
  begin
	if (rst)
		PC = 32'h00000000; //PC RESET;
	else
		PC = PC_new; //PC UPDATE TO PC+4;
end;

	assign opcode =  Inst_code[31:26];
	assign rs =  Inst_code[25:21];
	assign rt =  Inst_code[20:16];
	assign rd=  Inst_code[15:11];
	assign shamt = Inst_code[10:6];
	assign func =  Inst_code[5:0];
	 
	 always @(*)
		begin
    ALU_OP = 3'b000;
    Write_Reg = 1'b0;
	rs_shamt=1'b0;
    if (opcode==6'b000000)    //TYPE R INS
     begin
		Write_Reg = 1'b1;   //RESULT TO REG
		case (func) 
		6'b100000:begin ALU_OP=3'b100;Set_ZF=1;Set_OF=1; end
		6'b100010:begin ALU_OP=3'b101;Set_ZF=1;Set_OF=1; end
		6'b100100:begin ALU_OP=3'b000;Set_ZF=1;Set_OF=0; end
		6'b100101:begin ALU_OP=3'b001;Set_ZF=1;Set_OF=0; end
		6'b100110:begin ALU_OP=3'b010;Set_ZF=1;Set_OF=0; end
		6'b100111:begin ALU_OP=3'b011;Set_ZF=1;Set_OF=0; end
		6'b101011:begin ALU_OP=3'b110;Set_ZF=1;Set_OF=0; end
		6'b000100:begin ALU_OP=3'b111;Set_ZF=1;Set_OF=0; end
		6'b000000:begin ALU_OP=3'b111;Set_ZF=1;Set_OF=0;rs_shamt=1'b1; end
		endcase
    end
end;
	
	 REGS REGS_Q(R_Data_A,R_Data_B,ALU_F,rs,rt,rd,Write_Reg,rst,~clk);
	 assign ALU_A = (rs_shamt)?shamt_kz:R_Data_A;
	 ALU ALU_Q(ALU_OP,ALU_A,R_Data_B,ALU_F,ZF,OF);
	 
  always @(negedge clk or posedge rst)
  if (rst)
  begin
    FR_OF <= 1'b0;
	 FR_ZF <= 1'b0;
  end
  else
  begin
      if (Set_ZF) 
	   FR_ZF <= ZF;
      if (Set_OF)
	   FR_OF <= OF;
  end
endmodule
