#include<stdio.h>
/// Integer reverse
int main() {
    int n,rev=0;
    scanf("%d",&n);
    while (n>0) {
        int last= n%10;
        rev= rev*10 + last;
        n= n/10;
        printf("last: %d, rev: %d, n: %d\n",last,rev,n);
    }
    printf("Reverse: %d\n",rev);
    return 0;
}
