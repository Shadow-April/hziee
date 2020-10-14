`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:50:10 10/10/2020 
// Design Name: 
// Module Name:    four_bit_ds 
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
module four_bit_ds( input A,B,C,D,E0,E1,
						  output F
    );
			
			wire A,B,C,D,F;
			assign F = (A&(~E0)&(~E1))+(B&(~E0&E1))+(C&(E0&(~E1)))+(D&E0&E1);

endmodule
