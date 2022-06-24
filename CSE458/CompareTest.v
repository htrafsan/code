`timescale 1ns/1ps

module comparetest;
reg x;
reg y;

wire z;

//uut means unit under test
America uut(
.x(x),
.y(y),
.z(z)
);

initial
begin

x=0;
y=0;

#20 x=1; y=1;
end

initial
begin
	$monitor ("x=%d, y=%d, z=%d \n", x, y, z);
end

endmodule
