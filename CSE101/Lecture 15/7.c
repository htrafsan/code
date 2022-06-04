#include<stdio.h>

int main() {
    char s[15];
    scanf("%s",&s);
    int i;
    for (i=0; ;++i) {
        if (s[i]=='\0')
            break;
        printf("s[%d]: %d\n",i,s[i]);
    }
    return 0;
}








