#include<stdio.h>

int a=5,b=15;

int sum() {
    a= 7,b=20;
    return a+b;
}

int main() {
    a= 6,b= 19;
    int res= sum();
    printf("sum = %d\n",res);
    return 0;
}
