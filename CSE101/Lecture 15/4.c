#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char s[n],t;

    for (i=0;i<n;++i) {
        scanf("%c%c",&t,&s[i]);
    }
    int cnt=0;
    for (i=0;i<n;++i) {
        if (s[i]>='A' && s[i]<='Z')
            cnt++;
    }
    printf("Capital Letters: %d\n",cnt);
    return 0;
}
