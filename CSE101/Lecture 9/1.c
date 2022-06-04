#include<stdio.h>
// loop basic
// sum of 1+2+...+n
int main() {
    int n;
    scanf("%d",&n);
    int sum=0,i=1;

    while (i<=n) {
        sum+= i;
        i+= 1;
        printf("Sum: %d\n",sum);
        printf("i: %d\n",i);
    }

    return 0;
}
