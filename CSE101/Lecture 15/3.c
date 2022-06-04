#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char s[n],t;

    for (i=0;i<n;++i) {
        scanf("%c%c",&t,&s[i]);
    }
    printf("output:\n");
    for (i=0;i<n;++i) {
        printf("s[%d]: %c\n",i,s[i]);
    }
    return 0;
}
