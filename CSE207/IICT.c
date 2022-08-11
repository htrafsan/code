#include<stdio.h>
int main()
{
    int i=0,j;
    int n=10;
    while(i%11<n)
    {
        i=(i+2)%11;
        j=i+1;
        while(j<=n)
        {
            printf("(%d, %d),",i+1,j=j+3);
        }
    }
    return 0;
}
