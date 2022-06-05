#include<stdio.h>
int main()
{
    char A[100],B[100],C[100],D[100];

    scanf("%s %s",A,B);

    int Len1=0;
    while(A[Len1]!='\0'){
        Len1++;
    }
//    printf("%d\n",Len1);

    int Len2=0;
    while(B[Len2]!='\0'){
        Len2++;
    }
//    printf("%d\n",Len2);
    i
    f(Len1==Len2){
        int Match=0;
        for(i=0;i<Len1;i++){
            if(A[i]==B[i]){
                Match++;
            }
        }
        if(Match==Len1){
            printf("Equal");
        }else{
            printf("Not Equal");
        }
    }else{
        printf("Not Equal");
    }

    return 0;
}
