#include<stdio.h
int main()
{
    char A[100];
    int i;
    while(A[i]!='\0'){
        i++;
    }
    if(i<10){
        printf("%s",A);
    }else{
        printf("%c%d%c",A[0],i-2,A[i-1]);
    }
    return 0;
}
