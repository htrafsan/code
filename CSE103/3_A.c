#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s",A);
    if(A[strlen(A)-1]=='0'){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }
}
