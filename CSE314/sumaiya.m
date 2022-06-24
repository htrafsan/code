clear 
clc
syms y x f(x)

f(x) = x^3 + 2*x^2 - x +3

g(x) = diff(f(x),x,1)
x = -5:1:5
% exact sol plot(x,g(x))


y   = x.^3 + 2*x.^2 - x +3

dydx_num = diff(y)./diff(x);

dydx_num = [dydx_num -100]
% numerical sol plot(x,dydx_num)

plot(x,g(x),x,dydx_num)

