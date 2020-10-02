////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.58f
//  \   \         Application: netgen
//  /   /         Filename: Top_synthesis.v
// /___/   /\     Timestamp: Fri Oct 02 10:57:55 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim Top.ngc Top_synthesis.v 
// Device	: xa6slx16-3-csg324
// Input file	: Top.ngc
// Output file	: D:\HZIEE\2-COCP\2-Prac\P0-1\ShiftReg\netgen\synthesis\Top_synthesis.v
// # of Modules	: 1
// Design Name	: Top
// Xilinx        : C:\Xilinx\14.5\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Top (
  clk, clr, Din, Q
);
  input clk;
  input clr;
  input Din;
  output [3 : 0] Q;
  wire clk_BUFGP_0;
  wire clr_IBUF_1;
  wire Din_IBUF_2;
  wire \U1/clk_out_3 ;
  wire N0;
  wire N1;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ;
  wire \U1/Mcount_cnt_cy<1>_rt_106 ;
  wire \U1/Mcount_cnt_cy<2>_rt_107 ;
  wire \U1/Mcount_cnt_cy<3>_rt_108 ;
  wire \U1/Mcount_cnt_cy<4>_rt_109 ;
  wire \U1/Mcount_cnt_cy<5>_rt_110 ;
  wire \U1/Mcount_cnt_cy<6>_rt_111 ;
  wire \U1/Mcount_cnt_cy<7>_rt_112 ;
  wire \U1/Mcount_cnt_cy<8>_rt_113 ;
  wire \U1/Mcount_cnt_cy<9>_rt_114 ;
  wire \U1/Mcount_cnt_cy<10>_rt_115 ;
  wire \U1/Mcount_cnt_cy<11>_rt_116 ;
  wire \U1/Mcount_cnt_cy<12>_rt_117 ;
  wire \U1/Mcount_cnt_cy<13>_rt_118 ;
  wire \U1/Mcount_cnt_cy<14>_rt_119 ;
  wire \U1/Mcount_cnt_cy<15>_rt_120 ;
  wire \U1/Mcount_cnt_cy<16>_rt_121 ;
  wire \U1/Mcount_cnt_cy<17>_rt_122 ;
  wire \U1/Mcount_cnt_cy<18>_rt_123 ;
  wire \U1/Mcount_cnt_cy<19>_rt_124 ;
  wire \U1/Mcount_cnt_cy<20>_rt_125 ;
  wire \U1/Mcount_cnt_cy<21>_rt_126 ;
  wire \U1/Mcount_cnt_cy<22>_rt_127 ;
  wire \U1/Mcount_cnt_cy<23>_rt_128 ;
  wire \U1/Mcount_cnt_cy<24>_rt_129 ;
  wire \U1/Mcount_cnt_cy<25>_rt_130 ;
  wire \U1/Mcount_cnt_cy<26>_rt_131 ;
  wire \U1/Mcount_cnt_xor<27>_rt_132 ;
  wire \U1/clk_out_rstpot_133 ;
  wire \U1/cnt_0_rstpot_134 ;
  wire \U1/cnt_1_rstpot_135 ;
  wire \U1/cnt_2_rstpot_136 ;
  wire \U1/cnt_3_rstpot_137 ;
  wire \U1/cnt_4_rstpot_138 ;
  wire \U1/cnt_5_rstpot_139 ;
  wire \U1/cnt_6_rstpot_140 ;
  wire \U1/cnt_7_rstpot_141 ;
  wire \U1/cnt_8_rstpot_142 ;
  wire \U1/cnt_9_rstpot_143 ;
  wire \U1/cnt_10_rstpot_144 ;
  wire \U1/cnt_11_rstpot_145 ;
  wire \U1/cnt_12_rstpot_146 ;
  wire \U1/cnt_13_rstpot_147 ;
  wire \U1/cnt_14_rstpot_148 ;
  wire \U1/cnt_15_rstpot_149 ;
  wire \U1/cnt_16_rstpot_150 ;
  wire \U1/cnt_17_rstpot_151 ;
  wire \U1/cnt_18_rstpot_152 ;
  wire \U1/cnt_19_rstpot_153 ;
  wire \U1/cnt_20_rstpot_154 ;
  wire \U1/cnt_21_rstpot_155 ;
  wire \U1/cnt_22_rstpot_156 ;
  wire \U1/cnt_23_rstpot_157 ;
  wire \U1/cnt_24_rstpot_158 ;
  wire \U1/cnt_25_rstpot_159 ;
  wire \U1/cnt_26_rstpot_160 ;
  wire \U1/cnt_27_rstpot_161 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>11 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>21 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>31 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>41 ;
  wire \U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ;
  wire \U2/Q_0_1_167 ;
  wire [3 : 0] \U2/Q ;
  wire [27 : 0] \U1/cnt ;
  wire [27 : 0] Result;
  wire [0 : 0] \U1/Mcount_cnt_lut ;
  wire [26 : 0] \U1/Mcount_cnt_cy ;
  wire [27 : 27] \U1/GND_2_o_GND_2_o_equal_2_o ;
  GND   XST_GND (
    .G(N0)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDC   \U2/Q_3  (
    .C(\U1/clk_out_3 ),
    .CLR(clr_IBUF_1),
    .D(\U2/Q [2]),
    .Q(\U2/Q [3])
  );
  FDC   \U2/Q_2  (
    .C(\U1/clk_out_3 ),
    .CLR(clr_IBUF_1),
    .D(\U2/Q [1]),
    .Q(\U2/Q [2])
  );
  FDC   \U2/Q_1  (
    .C(\U1/clk_out_3 ),
    .CLR(clr_IBUF_1),
    .D(\U2/Q [0]),
    .Q(\U2/Q [1])
  );
  FDC   \U2/Q_0  (
    .C(\U1/clk_out_3 ),
    .CLR(clr_IBUF_1),
    .D(Din_IBUF_2),
    .Q(\U2/Q [0])
  );
  MUXCY   \U1/Mcount_cnt_cy<0>  (
    .CI(N0),
    .DI(N1),
    .S(\U1/Mcount_cnt_lut [0]),
    .O(\U1/Mcount_cnt_cy [0])
  );
  XORCY   \U1/Mcount_cnt_xor<0>  (
    .CI(N0),
    .LI(\U1/Mcount_cnt_lut [0]),
    .O(Result[0])
  );
  MUXCY   \U1/Mcount_cnt_cy<1>  (
    .CI(\U1/Mcount_cnt_cy [0]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<1>_rt_106 ),
    .O(\U1/Mcount_cnt_cy [1])
  );
  XORCY   \U1/Mcount_cnt_xor<1>  (
    .CI(\U1/Mcount_cnt_cy [0]),
    .LI(\U1/Mcount_cnt_cy<1>_rt_106 ),
    .O(Result[1])
  );
  MUXCY   \U1/Mcount_cnt_cy<2>  (
    .CI(\U1/Mcount_cnt_cy [1]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<2>_rt_107 ),
    .O(\U1/Mcount_cnt_cy [2])
  );
  XORCY   \U1/Mcount_cnt_xor<2>  (
    .CI(\U1/Mcount_cnt_cy [1]),
    .LI(\U1/Mcount_cnt_cy<2>_rt_107 ),
    .O(Result[2])
  );
  MUXCY   \U1/Mcount_cnt_cy<3>  (
    .CI(\U1/Mcount_cnt_cy [2]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<3>_rt_108 ),
    .O(\U1/Mcount_cnt_cy [3])
  );
  XORCY   \U1/Mcount_cnt_xor<3>  (
    .CI(\U1/Mcount_cnt_cy [2]),
    .LI(\U1/Mcount_cnt_cy<3>_rt_108 ),
    .O(Result[3])
  );
  MUXCY   \U1/Mcount_cnt_cy<4>  (
    .CI(\U1/Mcount_cnt_cy [3]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<4>_rt_109 ),
    .O(\U1/Mcount_cnt_cy [4])
  );
  XORCY   \U1/Mcount_cnt_xor<4>  (
    .CI(\U1/Mcount_cnt_cy [3]),
    .LI(\U1/Mcount_cnt_cy<4>_rt_109 ),
    .O(Result[4])
  );
  MUXCY   \U1/Mcount_cnt_cy<5>  (
    .CI(\U1/Mcount_cnt_cy [4]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<5>_rt_110 ),
    .O(\U1/Mcount_cnt_cy [5])
  );
  XORCY   \U1/Mcount_cnt_xor<5>  (
    .CI(\U1/Mcount_cnt_cy [4]),
    .LI(\U1/Mcount_cnt_cy<5>_rt_110 ),
    .O(Result[5])
  );
  MUXCY   \U1/Mcount_cnt_cy<6>  (
    .CI(\U1/Mcount_cnt_cy [5]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<6>_rt_111 ),
    .O(\U1/Mcount_cnt_cy [6])
  );
  XORCY   \U1/Mcount_cnt_xor<6>  (
    .CI(\U1/Mcount_cnt_cy [5]),
    .LI(\U1/Mcount_cnt_cy<6>_rt_111 ),
    .O(Result[6])
  );
  MUXCY   \U1/Mcount_cnt_cy<7>  (
    .CI(\U1/Mcount_cnt_cy [6]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<7>_rt_112 ),
    .O(\U1/Mcount_cnt_cy [7])
  );
  XORCY   \U1/Mcount_cnt_xor<7>  (
    .CI(\U1/Mcount_cnt_cy [6]),
    .LI(\U1/Mcount_cnt_cy<7>_rt_112 ),
    .O(Result[7])
  );
  MUXCY   \U1/Mcount_cnt_cy<8>  (
    .CI(\U1/Mcount_cnt_cy [7]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<8>_rt_113 ),
    .O(\U1/Mcount_cnt_cy [8])
  );
  XORCY   \U1/Mcount_cnt_xor<8>  (
    .CI(\U1/Mcount_cnt_cy [7]),
    .LI(\U1/Mcount_cnt_cy<8>_rt_113 ),
    .O(Result[8])
  );
  MUXCY   \U1/Mcount_cnt_cy<9>  (
    .CI(\U1/Mcount_cnt_cy [8]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<9>_rt_114 ),
    .O(\U1/Mcount_cnt_cy [9])
  );
  XORCY   \U1/Mcount_cnt_xor<9>  (
    .CI(\U1/Mcount_cnt_cy [8]),
    .LI(\U1/Mcount_cnt_cy<9>_rt_114 ),
    .O(Result[9])
  );
  MUXCY   \U1/Mcount_cnt_cy<10>  (
    .CI(\U1/Mcount_cnt_cy [9]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<10>_rt_115 ),
    .O(\U1/Mcount_cnt_cy [10])
  );
  XORCY   \U1/Mcount_cnt_xor<10>  (
    .CI(\U1/Mcount_cnt_cy [9]),
    .LI(\U1/Mcount_cnt_cy<10>_rt_115 ),
    .O(Result[10])
  );
  MUXCY   \U1/Mcount_cnt_cy<11>  (
    .CI(\U1/Mcount_cnt_cy [10]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<11>_rt_116 ),
    .O(\U1/Mcount_cnt_cy [11])
  );
  XORCY   \U1/Mcount_cnt_xor<11>  (
    .CI(\U1/Mcount_cnt_cy [10]),
    .LI(\U1/Mcount_cnt_cy<11>_rt_116 ),
    .O(Result[11])
  );
  MUXCY   \U1/Mcount_cnt_cy<12>  (
    .CI(\U1/Mcount_cnt_cy [11]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<12>_rt_117 ),
    .O(\U1/Mcount_cnt_cy [12])
  );
  XORCY   \U1/Mcount_cnt_xor<12>  (
    .CI(\U1/Mcount_cnt_cy [11]),
    .LI(\U1/Mcount_cnt_cy<12>_rt_117 ),
    .O(Result[12])
  );
  MUXCY   \U1/Mcount_cnt_cy<13>  (
    .CI(\U1/Mcount_cnt_cy [12]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<13>_rt_118 ),
    .O(\U1/Mcount_cnt_cy [13])
  );
  XORCY   \U1/Mcount_cnt_xor<13>  (
    .CI(\U1/Mcount_cnt_cy [12]),
    .LI(\U1/Mcount_cnt_cy<13>_rt_118 ),
    .O(Result[13])
  );
  MUXCY   \U1/Mcount_cnt_cy<14>  (
    .CI(\U1/Mcount_cnt_cy [13]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<14>_rt_119 ),
    .O(\U1/Mcount_cnt_cy [14])
  );
  XORCY   \U1/Mcount_cnt_xor<14>  (
    .CI(\U1/Mcount_cnt_cy [13]),
    .LI(\U1/Mcount_cnt_cy<14>_rt_119 ),
    .O(Result[14])
  );
  MUXCY   \U1/Mcount_cnt_cy<15>  (
    .CI(\U1/Mcount_cnt_cy [14]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<15>_rt_120 ),
    .O(\U1/Mcount_cnt_cy [15])
  );
  XORCY   \U1/Mcount_cnt_xor<15>  (
    .CI(\U1/Mcount_cnt_cy [14]),
    .LI(\U1/Mcount_cnt_cy<15>_rt_120 ),
    .O(Result[15])
  );
  MUXCY   \U1/Mcount_cnt_cy<16>  (
    .CI(\U1/Mcount_cnt_cy [15]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<16>_rt_121 ),
    .O(\U1/Mcount_cnt_cy [16])
  );
  XORCY   \U1/Mcount_cnt_xor<16>  (
    .CI(\U1/Mcount_cnt_cy [15]),
    .LI(\U1/Mcount_cnt_cy<16>_rt_121 ),
    .O(Result[16])
  );
  MUXCY   \U1/Mcount_cnt_cy<17>  (
    .CI(\U1/Mcount_cnt_cy [16]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<17>_rt_122 ),
    .O(\U1/Mcount_cnt_cy [17])
  );
  XORCY   \U1/Mcount_cnt_xor<17>  (
    .CI(\U1/Mcount_cnt_cy [16]),
    .LI(\U1/Mcount_cnt_cy<17>_rt_122 ),
    .O(Result[17])
  );
  MUXCY   \U1/Mcount_cnt_cy<18>  (
    .CI(\U1/Mcount_cnt_cy [17]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<18>_rt_123 ),
    .O(\U1/Mcount_cnt_cy [18])
  );
  XORCY   \U1/Mcount_cnt_xor<18>  (
    .CI(\U1/Mcount_cnt_cy [17]),
    .LI(\U1/Mcount_cnt_cy<18>_rt_123 ),
    .O(Result[18])
  );
  MUXCY   \U1/Mcount_cnt_cy<19>  (
    .CI(\U1/Mcount_cnt_cy [18]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<19>_rt_124 ),
    .O(\U1/Mcount_cnt_cy [19])
  );
  XORCY   \U1/Mcount_cnt_xor<19>  (
    .CI(\U1/Mcount_cnt_cy [18]),
    .LI(\U1/Mcount_cnt_cy<19>_rt_124 ),
    .O(Result[19])
  );
  MUXCY   \U1/Mcount_cnt_cy<20>  (
    .CI(\U1/Mcount_cnt_cy [19]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<20>_rt_125 ),
    .O(\U1/Mcount_cnt_cy [20])
  );
  XORCY   \U1/Mcount_cnt_xor<20>  (
    .CI(\U1/Mcount_cnt_cy [19]),
    .LI(\U1/Mcount_cnt_cy<20>_rt_125 ),
    .O(Result[20])
  );
  MUXCY   \U1/Mcount_cnt_cy<21>  (
    .CI(\U1/Mcount_cnt_cy [20]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<21>_rt_126 ),
    .O(\U1/Mcount_cnt_cy [21])
  );
  XORCY   \U1/Mcount_cnt_xor<21>  (
    .CI(\U1/Mcount_cnt_cy [20]),
    .LI(\U1/Mcount_cnt_cy<21>_rt_126 ),
    .O(Result[21])
  );
  MUXCY   \U1/Mcount_cnt_cy<22>  (
    .CI(\U1/Mcount_cnt_cy [21]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<22>_rt_127 ),
    .O(\U1/Mcount_cnt_cy [22])
  );
  XORCY   \U1/Mcount_cnt_xor<22>  (
    .CI(\U1/Mcount_cnt_cy [21]),
    .LI(\U1/Mcount_cnt_cy<22>_rt_127 ),
    .O(Result[22])
  );
  MUXCY   \U1/Mcount_cnt_cy<23>  (
    .CI(\U1/Mcount_cnt_cy [22]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<23>_rt_128 ),
    .O(\U1/Mcount_cnt_cy [23])
  );
  XORCY   \U1/Mcount_cnt_xor<23>  (
    .CI(\U1/Mcount_cnt_cy [22]),
    .LI(\U1/Mcount_cnt_cy<23>_rt_128 ),
    .O(Result[23])
  );
  MUXCY   \U1/Mcount_cnt_cy<24>  (
    .CI(\U1/Mcount_cnt_cy [23]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<24>_rt_129 ),
    .O(\U1/Mcount_cnt_cy [24])
  );
  XORCY   \U1/Mcount_cnt_xor<24>  (
    .CI(\U1/Mcount_cnt_cy [23]),
    .LI(\U1/Mcount_cnt_cy<24>_rt_129 ),
    .O(Result[24])
  );
  MUXCY   \U1/Mcount_cnt_cy<25>  (
    .CI(\U1/Mcount_cnt_cy [24]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<25>_rt_130 ),
    .O(\U1/Mcount_cnt_cy [25])
  );
  XORCY   \U1/Mcount_cnt_xor<25>  (
    .CI(\U1/Mcount_cnt_cy [24]),
    .LI(\U1/Mcount_cnt_cy<25>_rt_130 ),
    .O(Result[25])
  );
  MUXCY   \U1/Mcount_cnt_cy<26>  (
    .CI(\U1/Mcount_cnt_cy [25]),
    .DI(N0),
    .S(\U1/Mcount_cnt_cy<26>_rt_131 ),
    .O(\U1/Mcount_cnt_cy [26])
  );
  XORCY   \U1/Mcount_cnt_xor<26>  (
    .CI(\U1/Mcount_cnt_cy [25]),
    .LI(\U1/Mcount_cnt_cy<26>_rt_131 ),
    .O(Result[26])
  );
  XORCY   \U1/Mcount_cnt_xor<27>  (
    .CI(\U1/Mcount_cnt_cy [26]),
    .LI(\U1/Mcount_cnt_xor<27>_rt_132 ),
    .O(Result[27])
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>1  (
    .I0(\U1/cnt [20]),
    .I1(\U1/cnt [19]),
    .I2(\U1/cnt [22]),
    .I3(\U1/cnt [21]),
    .I4(\U1/cnt [25]),
    .I5(\U1/cnt [23]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o [27])
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>2  (
    .I0(\U1/cnt [12]),
    .I1(\U1/cnt [6]),
    .I2(\U1/cnt [14]),
    .I3(\U1/cnt [13]),
    .I4(\U1/cnt [17]),
    .I5(\U1/cnt [15]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>3  (
    .I0(\U1/cnt [1]),
    .I1(\U1/cnt [0]),
    .I2(\U1/cnt [3]),
    .I3(\U1/cnt [2]),
    .I4(\U1/cnt [5]),
    .I5(\U1/cnt [4]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>4  (
    .I0(\U1/cnt [8]),
    .I1(\U1/cnt [7]),
    .I2(\U1/cnt [9]),
    .I3(\U1/cnt [10]),
    .I4(\U1/cnt [11]),
    .I5(\U1/cnt [16]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 )
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>5  (
    .I0(\U1/cnt [24]),
    .I1(\U1/cnt [18]),
    .I2(\U1/cnt [26]),
    .I3(\U1/cnt [27]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 )
  );
  IBUF   clr_IBUF (
    .I(clr),
    .O(clr_IBUF_1)
  );
  IBUF   Din_IBUF (
    .I(Din),
    .O(Din_IBUF_2)
  );
  OBUF   Q_3_OBUF (
    .I(\U2/Q [3]),
    .O(Q[3])
  );
  OBUF   Q_2_OBUF (
    .I(\U2/Q [2]),
    .O(Q[2])
  );
  OBUF   Q_1_OBUF (
    .I(\U2/Q [1]),
    .O(Q[1])
  );
  OBUF   Q_0_OBUF (
    .I(\U2/Q_0_1_167 ),
    .O(Q[0])
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<1>_rt  (
    .I0(\U1/cnt [1]),
    .O(\U1/Mcount_cnt_cy<1>_rt_106 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<2>_rt  (
    .I0(\U1/cnt [2]),
    .O(\U1/Mcount_cnt_cy<2>_rt_107 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<3>_rt  (
    .I0(\U1/cnt [3]),
    .O(\U1/Mcount_cnt_cy<3>_rt_108 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<4>_rt  (
    .I0(\U1/cnt [4]),
    .O(\U1/Mcount_cnt_cy<4>_rt_109 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<5>_rt  (
    .I0(\U1/cnt [5]),
    .O(\U1/Mcount_cnt_cy<5>_rt_110 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<6>_rt  (
    .I0(\U1/cnt [6]),
    .O(\U1/Mcount_cnt_cy<6>_rt_111 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<7>_rt  (
    .I0(\U1/cnt [7]),
    .O(\U1/Mcount_cnt_cy<7>_rt_112 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<8>_rt  (
    .I0(\U1/cnt [8]),
    .O(\U1/Mcount_cnt_cy<8>_rt_113 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<9>_rt  (
    .I0(\U1/cnt [9]),
    .O(\U1/Mcount_cnt_cy<9>_rt_114 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<10>_rt  (
    .I0(\U1/cnt [10]),
    .O(\U1/Mcount_cnt_cy<10>_rt_115 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<11>_rt  (
    .I0(\U1/cnt [11]),
    .O(\U1/Mcount_cnt_cy<11>_rt_116 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<12>_rt  (
    .I0(\U1/cnt [12]),
    .O(\U1/Mcount_cnt_cy<12>_rt_117 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<13>_rt  (
    .I0(\U1/cnt [13]),
    .O(\U1/Mcount_cnt_cy<13>_rt_118 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<14>_rt  (
    .I0(\U1/cnt [14]),
    .O(\U1/Mcount_cnt_cy<14>_rt_119 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<15>_rt  (
    .I0(\U1/cnt [15]),
    .O(\U1/Mcount_cnt_cy<15>_rt_120 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<16>_rt  (
    .I0(\U1/cnt [16]),
    .O(\U1/Mcount_cnt_cy<16>_rt_121 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<17>_rt  (
    .I0(\U1/cnt [17]),
    .O(\U1/Mcount_cnt_cy<17>_rt_122 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<18>_rt  (
    .I0(\U1/cnt [18]),
    .O(\U1/Mcount_cnt_cy<18>_rt_123 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<19>_rt  (
    .I0(\U1/cnt [19]),
    .O(\U1/Mcount_cnt_cy<19>_rt_124 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<20>_rt  (
    .I0(\U1/cnt [20]),
    .O(\U1/Mcount_cnt_cy<20>_rt_125 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<21>_rt  (
    .I0(\U1/cnt [21]),
    .O(\U1/Mcount_cnt_cy<21>_rt_126 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<22>_rt  (
    .I0(\U1/cnt [22]),
    .O(\U1/Mcount_cnt_cy<22>_rt_127 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<23>_rt  (
    .I0(\U1/cnt [23]),
    .O(\U1/Mcount_cnt_cy<23>_rt_128 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<24>_rt  (
    .I0(\U1/cnt [24]),
    .O(\U1/Mcount_cnt_cy<24>_rt_129 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<25>_rt  (
    .I0(\U1/cnt [25]),
    .O(\U1/Mcount_cnt_cy<25>_rt_130 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_cy<26>_rt  (
    .I0(\U1/cnt [26]),
    .O(\U1/Mcount_cnt_cy<26>_rt_131 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \U1/Mcount_cnt_xor<27>_rt  (
    .I0(\U1/cnt [27]),
    .O(\U1/Mcount_cnt_xor<27>_rt_132 )
  );
  FD   \U1/clk_out  (
    .C(clk_BUFGP_0),
    .D(\U1/clk_out_rstpot_133 ),
    .Q(\U1/clk_out_3 )
  );
  LUT6 #(
    .INIT ( 64'h6AAAAAAAAAAAAAAA ))
  \U1/clk_out_rstpot  (
    .I0(\U1/clk_out_3 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/clk_out_rstpot_133 )
  );
  FD   \U1/cnt_0  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_0_rstpot_134 ),
    .Q(\U1/cnt [0])
  );
  FD   \U1/cnt_1  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_1_rstpot_135 ),
    .Q(\U1/cnt [1])
  );
  FD   \U1/cnt_2  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_2_rstpot_136 ),
    .Q(\U1/cnt [2])
  );
  FD   \U1/cnt_3  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_3_rstpot_137 ),
    .Q(\U1/cnt [3])
  );
  FD   \U1/cnt_4  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_4_rstpot_138 ),
    .Q(\U1/cnt [4])
  );
  FD   \U1/cnt_5  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_5_rstpot_139 ),
    .Q(\U1/cnt [5])
  );
  FD   \U1/cnt_6  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_6_rstpot_140 ),
    .Q(\U1/cnt [6])
  );
  FD   \U1/cnt_7  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_7_rstpot_141 ),
    .Q(\U1/cnt [7])
  );
  FD   \U1/cnt_8  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_8_rstpot_142 ),
    .Q(\U1/cnt [8])
  );
  FD   \U1/cnt_9  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_9_rstpot_143 ),
    .Q(\U1/cnt [9])
  );
  FD   \U1/cnt_10  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_10_rstpot_144 ),
    .Q(\U1/cnt [10])
  );
  FD   \U1/cnt_11  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_11_rstpot_145 ),
    .Q(\U1/cnt [11])
  );
  FD   \U1/cnt_12  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_12_rstpot_146 ),
    .Q(\U1/cnt [12])
  );
  FD   \U1/cnt_13  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_13_rstpot_147 ),
    .Q(\U1/cnt [13])
  );
  FD   \U1/cnt_14  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_14_rstpot_148 ),
    .Q(\U1/cnt [14])
  );
  FD   \U1/cnt_15  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_15_rstpot_149 ),
    .Q(\U1/cnt [15])
  );
  FD   \U1/cnt_16  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_16_rstpot_150 ),
    .Q(\U1/cnt [16])
  );
  FD   \U1/cnt_17  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_17_rstpot_151 ),
    .Q(\U1/cnt [17])
  );
  FD   \U1/cnt_18  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_18_rstpot_152 ),
    .Q(\U1/cnt [18])
  );
  FD   \U1/cnt_19  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_19_rstpot_153 ),
    .Q(\U1/cnt [19])
  );
  FD   \U1/cnt_20  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_20_rstpot_154 ),
    .Q(\U1/cnt [20])
  );
  FD   \U1/cnt_21  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_21_rstpot_155 ),
    .Q(\U1/cnt [21])
  );
  FD   \U1/cnt_22  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_22_rstpot_156 ),
    .Q(\U1/cnt [22])
  );
  FD   \U1/cnt_23  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_23_rstpot_157 ),
    .Q(\U1/cnt [23])
  );
  FD   \U1/cnt_24  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_24_rstpot_158 ),
    .Q(\U1/cnt [24])
  );
  FD   \U1/cnt_25  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_25_rstpot_159 ),
    .Q(\U1/cnt [25])
  );
  FD   \U1/cnt_26  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_26_rstpot_160 ),
    .Q(\U1/cnt [26])
  );
  FD   \U1/cnt_27  (
    .C(clk_BUFGP_0),
    .D(\U1/cnt_27_rstpot_161 ),
    .Q(\U1/cnt [27])
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_0_rstpot  (
    .I0(Result[0]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_0_rstpot_134 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_1_rstpot  (
    .I0(Result[1]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_1_rstpot_135 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_2_rstpot  (
    .I0(Result[2]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_2_rstpot_136 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_3_rstpot  (
    .I0(Result[3]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_3_rstpot_137 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_4_rstpot  (
    .I0(Result[4]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_4_rstpot_138 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_5_rstpot  (
    .I0(Result[5]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_5_rstpot_139 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_6_rstpot  (
    .I0(Result[6]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_6_rstpot_140 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_7_rstpot  (
    .I0(Result[7]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_7_rstpot_141 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_8_rstpot  (
    .I0(Result[8]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_8_rstpot_142 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_9_rstpot  (
    .I0(Result[9]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_9_rstpot_143 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_10_rstpot  (
    .I0(Result[10]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_10_rstpot_144 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_11_rstpot  (
    .I0(Result[11]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_11_rstpot_145 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_12_rstpot  (
    .I0(Result[12]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_12_rstpot_146 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_13_rstpot  (
    .I0(Result[13]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>4_98 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>3_97 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>2_96 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>1_95 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o [27]),
    .O(\U1/cnt_13_rstpot_147 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_14_rstpot  (
    .I0(Result[14]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_14_rstpot_148 )
  );
  LUT6 #(
    .INIT ( 64'h2AAAAAAAAAAAAAAA ))
  \U1/cnt_15_rstpot  (
    .I0(Result[15]),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_15_rstpot_149 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_16_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[16]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_16_rstpot_150 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_17_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[17]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_17_rstpot_151 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_18_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[18]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_18_rstpot_152 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_19_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[19]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_19_rstpot_153 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_20_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[20]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_20_rstpot_154 )
  );
  LUT6 #(
    .INIT ( 64'h4CCCCCCCCCCCCCCC ))
  \U1/cnt_21_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(Result[21]),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I5(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .O(\U1/cnt_21_rstpot_155 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_22_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[22]),
    .O(\U1/cnt_22_rstpot_156 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_23_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[23]),
    .O(\U1/cnt_23_rstpot_157 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_24_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[24]),
    .O(\U1/cnt_24_rstpot_158 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_25_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[25]),
    .O(\U1/cnt_25_rstpot_159 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_26_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[26]),
    .O(\U1/cnt_26_rstpot_160 )
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFF00000000 ))
  \U1/cnt_27_rstpot  (
    .I0(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 ),
    .I1(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 ),
    .I2(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 ),
    .I3(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 ),
    .I4(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 ),
    .I5(Result[27]),
    .O(\U1/cnt_27_rstpot_161 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>1_1  (
    .I0(\U1/cnt [20]),
    .I1(\U1/cnt [19]),
    .I2(\U1/cnt [22]),
    .I3(\U1/cnt [21]),
    .I4(\U1/cnt [25]),
    .I5(\U1/cnt [23]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>11 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>2_1  (
    .I0(\U1/cnt [12]),
    .I1(\U1/cnt [6]),
    .I2(\U1/cnt [14]),
    .I3(\U1/cnt [13]),
    .I4(\U1/cnt [17]),
    .I5(\U1/cnt [15]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>21 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>3_1  (
    .I0(\U1/cnt [1]),
    .I1(\U1/cnt [0]),
    .I2(\U1/cnt [3]),
    .I3(\U1/cnt [2]),
    .I4(\U1/cnt [5]),
    .I5(\U1/cnt [4]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>31 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>4_1  (
    .I0(\U1/cnt [8]),
    .I1(\U1/cnt [7]),
    .I2(\U1/cnt [9]),
    .I3(\U1/cnt [10]),
    .I4(\U1/cnt [11]),
    .I5(\U1/cnt [16]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>41 )
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \U1/GND_2_o_GND_2_o_equal_2_o<27>5_1  (
    .I0(\U1/cnt [24]),
    .I1(\U1/cnt [18]),
    .I2(\U1/cnt [26]),
    .I3(\U1/cnt [27]),
    .O(\U1/GND_2_o_GND_2_o_equal_2_o<27>5_166 )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_0)
  );
  INV   \U1/Mcount_cnt_lut<0>_INV_0  (
    .I(\U1/cnt [0]),
    .O(\U1/Mcount_cnt_lut [0])
  );
  FDC   \U2/Q_0_1  (
    .C(\U1/clk_out_3 ),
    .CLR(clr_IBUF_1),
    .D(Din_IBUF_2),
    .Q(\U2/Q_0_1_167 )
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

