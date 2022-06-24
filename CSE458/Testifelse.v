
`timescale 1ns / 1ps
module stimulus;
	reg [4:1] x;
	wire [2:0] pcode;
	// Instantiate the Unit Under Test (UUT)
	priory_encoder uut (
		.x(x), 
		.pcode(pcode)
	);
 
	initial begin
		// Initialize Inputs
x = 4'b0000;     
 
	#20 x = 4'b0001;
	#20 x = 4'b0010;
	#20 x = 4'b0011;
	#20 x = 4'b0100;
	#20 x = 4'b0101;  
	#20 x = 4'b0110;
	#20 x = 4'b0111;
	#20 x = 4'b1000;
	#20 x = 4'b1001;
	#20 x = 4'b1010;
	#20 x = 4'b1011;
	#20 x = 4'b1100;
	#20 x = 4'b1101;  
	#20 x = 4'b1110;
	#20 x = 4'b1111;
	#40 ;
 
	end  
 
		initial begin
		 $monitor("t=%3d x=%4b,pcode=%3b",$time,x,pcode );
		 end
 
endmodule
 