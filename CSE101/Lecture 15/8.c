#include<stdio.h>

int main() {
    char s[15];
    scanf("%s",&s);
    int i;
    for (i=0;s[i]!='\0';++i) {
        printf("s[%d]: %d\n",i,s[i]);
    }
    printf("count: %d\n",i);
    return 0;
}








