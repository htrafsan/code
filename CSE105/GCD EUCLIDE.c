#include<stdio.h>
void main()
{
    int a,b,x,y,r;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    x=a;
    y=b;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    printf("GCD of %d and %d is %d",a,b,x);
}
