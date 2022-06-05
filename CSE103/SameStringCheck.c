#include<stdio.h>
int main()
{
    char A[100],B[100];

    scanf("%s %s",A,B);

    int L1=0,L2=0;
    while(A[L1]!='\0'){
        L1++;
    }
    while(B[L2]!='\0'){
        L2++;
    }


    int i;
    if(L1==L2){

        for(i=0;i<A[i]!='\0';i++){
            if(A[i]>='A' && A[i]<='Z'){
                A[i]+=32;
            }
        }
        for(i=0;i<B[i]!='\0';i++){
            if(B[i]>='A' && B[i]<='Z'){
                B[i]+=32;
            }
        }

        int Match=0;
        for(i=0;i<L1;i++){
            if(A[i]==B[i]){
                Match++;
            }
        }
        if(Match==L1){
            printf("Matched\n");
        }else{
            printf("Did not match\n");
        }
    }

    else{
        printf("Did not match");
    }

    return 0;
}
