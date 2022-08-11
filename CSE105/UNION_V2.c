#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,k=0,l=0;
    char a[100],b[100],c[100],d[100];
    printf("Enter the element of set A:");
    gets(a);
    printf("Enter the element of set B:");
    gets(b);
    for(i=0; i<strlen(a); i++)
    {
        c[k]=a[i];
        k++;

    {
        for(j=0; j<strlen(b); j++)
        {
            if(b[i]==a[j])
            {
                break;

            }
            if(j==strlen(a))
            {
                c[k]=b[i];
                k++;
            }
        }
    }
    }
    printf("\nThe UNION of the sets A & B is : {");
    for(i=0; i<k; i++)
    {
        printf("%c",c[i]);
    }
    printf("}");
    for(j=0; j<strlen(a); j++)
    {
        for(i=0; i<strlen(b); i++)
        {
            if(b[i]==a[j])
            {
                break;
            }
        }
        if(i!=strlen(b))
        {
            d[l]=b[i];
            l++;
        }
    }
    printf("\nThe INTERSECTION of the sets A & B is:{");
    for(i=0; i<l; i++)
    {
        printf("%c",d[i]);
    }
    printf("}");
    return 0;
}
