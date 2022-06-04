#include<stdio.h>
///
int main() {
    int n;
    scanf("%d",&n);
    for (;n>0;n=n-1) {
        int i;
        for (i=1;i<=n;i=i+1) {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}

