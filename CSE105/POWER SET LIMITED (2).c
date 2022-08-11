#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[100];
    int i,j,k;
    printf("Enter the elements of set:");
    gets(s);
    printf("Power set=");
    printf("{{},");
    for(i=0; i<strlen(s); i++)
        printf("{%c},",s[i]);
    for(i=0; i<strlen(s); i++)
        for(j=i+1; j<strlen(s); j++)
            printf("{%c,%c},",s[i],s[j]);

    for(i=0; i<strlen(s); i++)
        for(j=i+1; j<strlen(s); j++)
            for(k=j+1;k<strlen(s);k++)
                printf("{%c,%c,%c},",s[i],s[j],s[k]);
    printf("{");
    for (i=0; i<strlen(s); i++)
    {
        if (i<strlen(s)-1)
            printf("%c,",s[i]);
        else
            printf("%c",s[i]);
    }
    printf("}");
    printf("}");
}
