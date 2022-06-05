#include<stdio.h>
int main()
{
    char A[100];

    scanf("%s",A);

    int i;

    printf("Before Case Conversion: %s\n",A);

    for(i=0;i<A[i]!='\0';i++){
        if(A[i]>='A' && A[i]<='Z'){
            A[i]+=32;
        }
    }


    printf("After Case Conversion: %s",A);

    return 0;
}
