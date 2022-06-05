#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int A[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int Mid=N/2;
    int Sum1=0,Sum2=0;
    for(i=0;i<N;i++){
        Sum1+=A[i][Mid];
    }

    for(i=0;i<N;i++){
        Sum2+=A[Mid][i];
    }
    if(Sum1==Sum2){
        printf("Equal");
    }else{
        printf("Not Equal");
    }

    return 0;
}
