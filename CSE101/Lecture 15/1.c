#include<stdio.h>

int main() {
    char s[15];
    s[0]= 'A';
    s[1]= 'b';
    s[2]= 66;
    printf("%d %d\n",s[0],s[1]);
    printf("%c\n",s[2]);
    return 0;
}
