module mux2tb;
wire out;
reg cntrl,in1,in2;
Mux2_1 uut(out,cntrl,in1,in2);
initial
begin	
     $monitor($time," out=%b,cntrl=%b,in1=%b,in2=%b",out,cntrl,in1,in2);	
	cntrl=0;in1=0;in2=0;
     #1 in1=1;in2=0;
     #1 in1=0;in2=1;
	 #1 in1=1; in2=1;
     #1 cntrl=1;
     #1 in1=0;in2=0;
     #1 in1=1;in2=0;
     #1 in1=0;in2=1;
	 #1 in1=1; in2=1;
     #10 $finish;
end
endmodule