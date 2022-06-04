#include<stdio.h>

int main(){
    int p= 923;
    int zeroth= p%10;
    printf("%d\n",zeroth);
    p= p/10;
    int once= p%10;
    printf("%d\n",once);
    p= p/10;
    int hundredth= p%10;
    printf("%d\n",hundredth);
    return 0;
}
