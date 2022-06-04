#include<stdio.h>
// loop basic
// long long int
// Factorial(N)= product of 1,2,3,...,N
int main() {
    int n;
    scanf("%d",&n);
    long long int i=1,prod=1;

    while (i<=n) {
        prod= prod*i;
        printf("factorial(%lld)= %lld\n",i,prod);
        i+= 1;
    }

    return 0;
}
