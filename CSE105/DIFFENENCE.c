#include<stdio.h>
#include<string.h>
void main(){
    int i,j,count;
    char a[20],b[20];
    printf("Enter the elements of set A:");
    gets(a);
    printf("Enter the elements of set B:");
    gets(b);
    printf("{");
    for(i=0; i<strlen(a); i++){
        count=0;
        for(j=0; j<strlen(b); j++){
            if(a[i]==b[j])
                count++;
        }
        if(count==0){
            if(i==strlen(a)-1)
                printf("%c",a[i]);
            else
                printf("%c,",a[i]);
        }
    }
    printf("}");
}
