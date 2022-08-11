#include<stdio.h>
//function of sum
void calc(int a, int b)
{
    printf("\nAdd = %d",a+b);
    printf("\nSub = %d",a-b);
    printf("\nMul = %d",a*b);
    printf("\nDiv = %d",a/b);
}
main()
{

    calc(20,5);
}
