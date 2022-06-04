#include<stdio.h>

int main() {
    int p;
    scanf("%d",&p);

    if (p>0)
        printf("Positive\n");
    else
        printf("Negative\n");

    p= p*-1;
    printf("%d\n",p);

    return 0;
}
