#include<stdio.h>
// loop basic
// print all numbers from N to 1
int main() {
    int n;
    scanf("%d",&n);
    int i=n;

    while (i>=1) {
        printf("i= %d\n",i);
        i-= 1;
    }

    printf("End\n");

    return 0;
}
