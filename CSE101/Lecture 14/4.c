#include<stdio.h>

int sum() {
    static int a=5;
    a= a+1;
    return a;
}

void main() {
    int res= sum();
    printf("%d\n",res);
    res= sum();
    printf("%d\n",res);
    res= sum();
    printf("%d\n",res);
    return 0;
}





