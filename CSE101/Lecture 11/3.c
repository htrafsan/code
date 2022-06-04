#include<stdio.h>

int main() {
    int i=1,n=5;
    while (i<=n) {
        printf("%d ",i);
        i= i+1;
    }
    printf("\n");

    for (i=1;i<=n;i=i+1) {
        printf("%d ",i);
    }
    return 0;
}
