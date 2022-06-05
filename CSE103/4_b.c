#include<stdio.h>
int main()
{
    char A[1000],B[100000];
    int N,i,j;
    scanf("%s %d",A,N);
    int Ind=0;
    for(i=1;i<=N;i++){
        for(j=0;j<strlen(A);j++){
            B[Ind]=A[j];
            Ind++;
        }
    }
}
