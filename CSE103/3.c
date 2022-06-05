#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int Len1=0;
    while(A[Len1]!='\0'){
        Len1++;
    }
    int i,Vowel=0;;
    for(i=0;i<Len1;i++){
        if(A[i]>='A' && A[i]<='Z'){
            A[i]+=32;
        }
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            Vowel++;
        }
    }

    printf("NUmber of Vowels is %d",Vowel);
    return 0;
}
