#include<stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    while (n!=0) {
        printf("%d",n%2);
        n= n/2;
        cnt= cnt+1;
    }
    printf("\nBits: %d\n",cnt);
    return 0;
}
