#include<stdio.h>
#include<string.h>
void main(){
    int i,j,count=0,x;
    char s1[20],s2[20];
    printf("Enter the elements of 1st set:");
    gets(s1);
    printf("Enter the elements of 2nd set:");
    gets(s2);
    for(i=0;i<strlen(s1);i++){
        x=0;
        for(j=0;j<strlen(s2);j++){
            if(s1[i]==s2[j])
                x++;
        }
        if(x>0)
            count++;
    }
    if(count==strlen(s1))
        printf("Equal Set");
    else
        printf("Not Equal");
}
