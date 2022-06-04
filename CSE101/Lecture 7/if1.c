#include<stdio.h>

int main() {
    int p;
    scanf("%d",&p);

    if (p>0) {
        printf("Positive\n");
        p= p*-1;
    }
    if (p<0) {
        printf("Negative\n");
    }
    if (p==0)
        printf("Zero\n");

    printf("%d\n",p);

    return 0;
}
