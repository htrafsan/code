#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,n;
    char a[100],b[100];
    printf("Enter the elements of set A:");
    gets(a);
    printf("Enter the elements of set B:");
    gets(b);

    for(i=0; i<strlen(a); i++)
    {
        n=0;
        for(j=0; j<strlen(b); j++)
        {

            if(a[i]!=b[j])
            {
                n++;
            }
        }
        if(n==strlen(b))
            printf("%c,",a[i]);
    }
}

