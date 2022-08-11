#include<stdio.h>
int main(void)
{
    int x;
    int *y;
    x=1;
    y=&x;
    printf("\nValue of x: %d",x);
    printf("\nValue of y: %d",y);
    printf("\nAddress of x: %d",&x);
    printf("\nAddress of y: %d",&y);
    printf("\nPointer of y: %d",*y);
    return 0;
}
