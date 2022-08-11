#include<stdio.h>
#include<string.h>
void main(){
    int i,j,k=0,count,x=0,y,pos[100];
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    for(i=0,k=0;i<strlen(s1);i++,k++)
        s3[k]=s1[i];
    for(i=0,k=strlen(s1);i<strlen(s2);i++,k++)
        s3[k]=s2[i];
    for(i=0;i<k;i++){
        for(j=k-1;j>i;j--){
            if(s3[i]==s3[j]){
                pos[x]=j;
                x++;
            }
        }
        count=0;
        for(y=0;y<x;y++){
            if(i!=pos[y])
                count++;
        }
        if(count==x)
            printf("%c,",s3[i]);
    }
}
