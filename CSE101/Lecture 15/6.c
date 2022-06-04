#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char s[n],t;
    scanf("%c",&t);

    for (i=0;i<n;++i) {
        scanf("%c",&s[i]);
    }
    for (i=0;i<n;++i) {
        if (s[i]>='A' && s[i]<='Z')
            s[i]= s[i] + 32;
        else if (s[i]>='a' && s[i]<='z')
            s[i]= s[i] - 32;
    }
    printf("Case toggle: ");
    for (i=0;i<n;++i) {
        printf("%c",s[i]);
    }
    return 0;
}








