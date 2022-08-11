#include<stdio.h>
#include<string.h>
void main(){
    int count=0,i;
    char pw[9];
    printf("Enter Your Password:");
    gets(pw);
    if(strlen(pw)>5 && strlen(pw)<9)
        count++;
    if((pw[0]>toascii(96) && pw[0]<toascii(123)) || ((pw[0]>toascii(64) && pw[0]<toascii(91))))
        count++;
    for(i=0;i<strlen(pw);i++)
        if((pw[i]>toascii(34) && toascii(39)) || (pw[i]>toascii(59) && toascii(65)) || (pw[0]>toascii(96) && pw[0]<toascii(123)) || (pw[0]>toascii(64) && pw[0]<toascii(91)))
            continue;
        else
            count--;
    for(i=1;i<=strlen(pw);i++){
        if(pw[i]>toascii(47) && pw[i]<toascii(58)){
            count++;
            break;
        }
    }
    if(count==3)
        printf("Valid Password");
    else
        printf("Invalid Password");
}
