module comparator(
    input x,
    input y,
    output reg z
    );
 
reg p,q;	
always @(x,y)
begin
 
p = (~x & ~y);
q =  x & y;
 
z = p |q;
end
 
endmodule