#include<stdio.h>
main()
{
    int n1=5,n2=10;
    n1=n1^n2;
    n2=n1^n2;
    n1=n1^n2;
    printf("%d %d",n1,n2);
}
