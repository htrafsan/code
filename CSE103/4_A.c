#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N],i,j;
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int Count=0;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[i]+A[j]%3==0){
                Count++;
            }
        }
    }
    printf("%d",Count);
    return 0;
}
