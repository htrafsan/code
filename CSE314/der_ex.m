clear, clc
x = -5:1:5;
y = x.^3 + 2*x.^2 -x +3;
%%figure(1);

dydx_exact = 3*x.^2 + 4*x -1;
%plot(x,dydx_exact);

%{
y_z2 = [];
x_z2 = [];
for i=-5:.1:5
    formula = i.^3 + 2*i.^2 -i +3;
    y_z2 = [y_z2 formula];
    x_z2 = [x_z2 i]
end

y_z1 = [];
x_z1 = [];
for i=-4:.1:6
    formula = i.^3 + 2*i.^2 -i +3;
    y_z1 = [y_z1 formula];
    x_z1 = [x_z1 i]
end
z3 = [];
z3 = (y_z1-y_z2)/(x_z1-x_z2)

plot(x,z3);

plot(x,dydx_exact,x,z3);
%}

plot(x,dydx_exact);
%}
dydx = diff(y)./diff(x);

dydx = [dydx -100]
plot(x,dydx_exact, x, dydx)
legend('Exac', 'Numerical')