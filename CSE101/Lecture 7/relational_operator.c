#include<stdio.h>

int main() {
    int p,q=1;
    scanf("%d",&p);

    int res= p==0;
    printf("res= %d\n",res);

    res= q + (p==0);
    printf("res= %d\n",res);

    return 0;
}
