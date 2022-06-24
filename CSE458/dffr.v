// D Flip Flop with Asyncronous Reset
 
module d_ff
   (
    input wire Clock,
    input wire D,
	input Rst, 
    output reg Q
   );
 
   always @(negedge Rst or  posedge Clock  )
      begin
	  if (!Rst)
      Q = 0;
	  else 
	  Q = D;
	  end
endmodule