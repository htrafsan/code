#include<stdio.h>
int main()
{
    char A[100],B[100];
    scanf("%s %s",A,B);

    int Len1=0,Len2=0,i;
    while(A[Len1]!='\0'){
        Len1++;
    }
    while(B[Len2]!='\0'){
        Len2++;
    }
    if(Len1==Len2){
        for(i=0;i<Len1;i++){
            if(A[i]>='a' && A[i]<='z'){
                A[i]-=32;
            }
        }
        for(i=0;i<Len2;i++){
            if(B[i]>='a' && B[i]<='z'){
                B[i]-=32;
            }
        }
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
    }
    else{
        printf("Not Equal");
    }
    return 0;
}
