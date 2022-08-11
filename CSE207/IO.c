#include<stdio.h>
int main()
{
    char s[]="man";
    int i;
    for(i=0; s[i]; i++)
    {
        printf("\n%c%c%c%c",s[i],*(s+i),*(i+s),i[s]);
    }
    return 0;
}
