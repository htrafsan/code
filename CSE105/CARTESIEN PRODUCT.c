#include<stdio.h>
#include<string.h>
void main(){
    int i,j,count=0,x;
    char s1[10],s2[10];
    printf("Enter the elements of 1st set:");
    gets(s1);
    printf("Enter the elements of 2nd set:");
    gets(s2);
    printf("{");
    for(i=0;i<strlen(s1);i++){
        for(j=0;j<strlen(s2);j++){
            if(i==strlen(s1)-1 && j==strlen(s2)-1)
                printf("{%c,%c}",s1[i],s2[j]);
            else
                printf("{%c,%c},",s1[i],s2[j]);
        }
    }
    printf("}");
}
