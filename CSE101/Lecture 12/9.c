#include<stdio.h>

float sum(float a,float b) {
    float res= a+b;
    return res;
}

int main() {
    printf("Hello\n");
    float n= sum(3.3,8);
    printf("%f\n",n);
    printf("Hello\n");
    return 0;
}
