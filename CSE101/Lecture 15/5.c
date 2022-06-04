#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char s[n],t;

    for (i=0;i<n;++i) {
        scanf("%c%c",&t,&s[i]);
    }
    for (i=0;i<n;++i) {
        if (s[i]>='A' && s[i]<='Z')
            s[i]= s[i] + 32;
    }
    printf("Converted to small: ");
    for (i=0;i<n;++i) {
        printf("%c",s[i]);
    }
    return 0;
}




