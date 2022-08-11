#include<stdio.h>
#include<string.h>
void main(){
    int a,i,j,count=0;
    char s[20];
    printf("Enter the elements of set:");
    gets(s);
    for(i=0;i<strlen(s);i++){
        for(j=strlen(s)-1;j>i;j--){
            if(s[j]==s[i]){
                count++;
                break;
            }
        }
    }
    a=strlen(s)-count;
    printf("Cardinality=%d",a);
}
