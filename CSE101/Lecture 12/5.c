#include<stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    while (n!=0) {
        n= n/10;
        cnt= cnt+1;
    }
    printf("Digits: %d\n",cnt);
    return 0;
}
