#include<stdio.h>
int main(void)
{
    int n = 10;
    int a = n;
    int i;
    int count = 0;
    for (i=1;i<=n;i++)
    {
        while ( 0<a )
        {
            a--;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
