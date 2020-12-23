`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:52 12/16/2020 
// Design Name: 
// Module Name:    RI_CPU 
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
module RI_CPU(
	 clk,clk_ram,rst,
	 rd_rt_s,rt_imm_s,imm_s,	// FOR INST TYPE I SELECT DATA TO SIGN/RT-RD/IMM
    Inst_code,PC,
    opcode,rs,rt,rd,shamt,func,imm,offset,
	 ALU_F,FR_ZF,FR_OF,ALU_OP,
	 rs_shamt,ALU_A,ALU_B
    );
	 input clk_ram;//TIMER    // clk_ram = 4*clk
	 output reg clk;
    input rst;//RESET
	 output reg [31:0]PC;//PC
    wire [31:0]PC_new;
    output [31:0]Inst_code;//TAKED INSTRUCTION
    output [5:0]opcode,func;//DIV INST
    output [4:0]rs,rt,rd,shamt;//DIV INST
	 // FOR INST I 
	 output reg rd_rt_s;
	 output reg rt_imm_s;
	 output reg imm_s;
	 output [15:0] imm;
	 output [15:0] offset;
	 
	 // FOR GPRS
	 // GPRs(R_Data_A,R_Data_B,W_Data,R_Addr_A,R_Addr_B,W_Addr,rd_rt_s,rt_imm_s,imm_s,Write_Reg,rst,clk);
	 reg [31:0]W_Data;
	 reg [4:0]R_Addr_A;
	 reg [4:0]R_Addr_B;
	 reg [4:0]W_Addr;
	 
	 wire [31:0] imm_data;
	 // END FOR I
	 
	 wire [25:0]address;//DIV INST
    output [31:0] ALU_F;//ALU RESULT
	 output reg [2:0] ALU_OP;//ALU OP
	 output reg FR_ZF;
	 output reg  FR_OF;
	 wire ZF,OF;
	 output  [31:0]ALU_A;
	 output  [31:0]ALU_B;
	 reg Write_Reg;
	 //-------------------------------
	 reg Mem_Write;
	 
	 //-------------------------------
	 wire [31:0]R_Data_A;
	 wire [31:0]R_Data_B;
	 reg Set_ZF;
	 reg Set_OF;
	 wire [31:0]shamt_kz;
	 output reg rs_shamt;
	 
	 assign shamt_kz={{16{1'b0}},shamt};
	 initial PC = 32'h00000000;
	 assign PC_new = PC + 4;
	 

ROM_B ROMTMD(
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(Inst_code) // output [31 : 0] douta
);

RAM_RI RAMTMD (
  .clka(clk_ram), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(PC[7:2]), // input [5 : 0] addra
  .dina(dina), // input [31 : 0] dina
  .douta(douta) // output [31 : 0] douta
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
	
	// IF INST BELONG I
	assign imm = Inst_code[15:0];
	 
	// END IF 
	 always @(*)
	 begin
    ALU_OP = 3'b000;
    Write_Reg = 1'b0;
	 rs_shamt=1'b0;
    if (opcode==6'b000000)    //TYPE R INS
     begin
		Write_Reg = 1'b1;   //RESULT TO REG
		// FOR INST DIFF I
		rd_rt_s = 1'b0;
		rt_imm_s = 1'b0;
		imm_s = 1'b0;
		
		//-------------------------------------------------- REG ONLY IN ALWAYS
		W_Data   = ALU_F;
		R_Addr_A = rs;
		R_Addr_B = rt;
		W_Addr   = rd;
		
		
		//--------------------------------------------------
		// FOR INST DIFF I
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
    end     // END OF INST TYPE R
	 else
		begin	// BEGINING OF INST TYPE I
		Write_Reg = 1'b1;
		rd_rt_s = 1'b1;
		rt_imm_s = 1'b1;
		
		//-------------------------------------------------- REG ONLY IN ALWAYS
		W_Data   = ALU_F;
		R_Addr_A = rs;
		R_Addr_B = rt;
		W_Addr   = rt;
		//--------------------------------------------------
		case (opcode) 
		6'b001000:begin imm_s=1'b1;ALU_OP=3'b100;Set_ZF=1;Set_OF=1; end		// A+B
		6'b001100:begin imm_s=1'b0;ALU_OP=3'b000;Set_ZF=1;Set_OF=1; end		// A&B
		6'b001110:begin imm_s=1'b0;ALU_OP=3'b010;Set_ZF=1;Set_OF=0; end		// A^B
		6'b001011:begin imm_s=1'b0;ALU_OP=3'b110;Set_ZF=1;Set_OF=0; end		//	A<B ? F=1:F=0 
		
		// START OF SW/LW
		6'b100011:begin imm_s=1'b0;ALU_OP=3'b110;Set_ZF=1;Set_OF=0; end		// lw rt,offset(rs)	
		6'b101011:begin imm_s=1'b0;ALU_OP=3'b110;Set_ZF=1;Set_OF=0; end		// sw rt,offset(rs)
		// END OF SW/LW
		endcase
		
		
		end 	// END OF INST TYPE I
	 
	end; // END OF ALWAYS
	
	 // GPRs SELECT BEGIN-------------------------------------------------------------------------------------

         // GPRs(R_Data_A,R_Data_B,W_Data,R_Addr_A,R_Addr_B,W_Addr,rd_rt_s,rt_imm_s,imm_s,Write_Reg,rst,clk);
	 GPRs REGS_RI(R_Data_A,R_Data_B,W_Data,R_Addr_A,R_Addr_B,W_Addr,rd_rt_s,rt_imm_s,imm_s,Write_Reg,rst,~clk);
	 
	 // END OF GPRs SELECT------------------------------------------------------------------------------------
	 assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};
	 assign ALU_A = (rs_shamt)?shamt_kz:R_Data_A;
	 assign ALU_B = (rt_imm_s)?imm_data:R_Data_B;
	 ALU ALU_Q(ALU_OP,ALU_A,ALU_B,ALU_F,ZF,OF);
	 
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

