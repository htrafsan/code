#include<stdio.h>

int sum(int a,int b) {
    a=10,b=20;
    return a+b;
}

int main() {
    int a=5,b=10;
    int res= sum(a,b);
    printf("sum = %d\n",res);
    printf("%d %d\n",a,b);
    return 0;
}
