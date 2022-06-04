#include<stdio.h>

int main()
{
    int p;
    scanf("%d",&p);

    if (p>0)
        printf("Positive\n");
    else
    {
        if (p==0)
            printf("Zero\n");
        else
            printf("Negative\n");
    }
    return 0;
}
