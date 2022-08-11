#include<stdio.h>
main()
{
    int num,i, flag=0;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("Not prime\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime\n");
    }
}
