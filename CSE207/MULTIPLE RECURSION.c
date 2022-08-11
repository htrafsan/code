#include<stdio.h>
int multiply(int x, int y)
{
    if(x==y)
        return y;
    else
        return x*multiply(x+1,y);
}
int main()
{
    multiply(5,7);
}
