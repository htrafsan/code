#include<stdio.h>
// loop basic
// print all numbers from 1 to N
int main() {
    int n;
    scanf("%d",&n);
    int i=1;

    while (i<=n) {
        printf("i= %d\n",i);
        i+= 1;
    }
    printf("i= N\n");
    printf("End\n");

    return 0;
}
