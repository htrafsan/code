#include<stdio.h>
int main()
{
    char A[100];

    scanf("%s",A);

    int i=0;

    while(A[i]!='\0'){
        i++;
    }

    printf("Length of the String = %d",i);

    return 0;
}
