#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,k=0,e,r,n,x,m;
    printf("Enter the elements of set:");
    gets(a);
    printf("Power Set of given set:");
    j=strlen(a);
    for(i=0; i<j; )
    {
        if(a[i]!=' ')
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("{{},");
    for(i=0; i<k; i++)
    {
        if(i==0)
        {
            for(n=0; n<k; n++)
                printf("{%c},",b[n]);
            for(j=i+1; j<k; j++)
                printf("{%c,%c},",b[i],b[j]);
        }
        if(i==1)
        {
            for(j=i+1;j<k;j++)
            printf("{%c,%c},",b[i],b[j]);
        }
        if(i==2)
        {
            printf("{");
            for(j=0;j<k;j++)
            printf("%c,",b[j]);
            printf("}");
        }
    }
    printf("}");
}

