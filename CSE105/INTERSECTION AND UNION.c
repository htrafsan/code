#include<stdio.h>
#include<string.h>
void main(){
    int i,j,k=0,count;
    char s1[20],s2[20],s3[20];
    gets(s1);
    gets(s2);
    for(i=0; i<strlen(s1); i++){
        for(j=0; j<strlen(s2); j++){
            if(s1[i]==s2[j]){
                s3[k]=s1[i];
                k++;
            }
        }
    }
    printf("Intersect:");
    for(i=0;i<k;i++)
        printf("%c,",s3[i]);
    printf("\n");
    printf("Union:");
    for(i=0;i<strlen(s1);i++){
            count=0;
        for(j=0;j<strlen(s3);j++){
            if(s1[i]!=s3[j])
                count++;
        }
        if(count==strlen(s3))
            printf("%c,",s1[i]);
    }
    for(i=0;i<strlen(s2);i++){
        count=0;
        for(j=0;j<strlen(s3);j++){
            if(s2[i]!=s3[j])
                count++;
        }
        if(count==strlen(s3))
            printf("%c,",s2[i]);
    }
    for(i=0;i<k;i++)
        printf("%c,",s3[i]);
}
