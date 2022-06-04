#include<stdio.h>
///
int main() {
    int n;
    scanf("%d",&n);
    while (n>0) {
        int i=1;
        while (i<=n) {
            printf("%d ",i);
            i= i+1;
        }
        printf("\n");
        n= n-1;
    }

    return 0;
}
