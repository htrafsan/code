#include<stdio.h>

int main() {
    int n,i,min;
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1) {
        int num;
        scanf("%d",&num);
        if (i==1 || num<min)
            min= num;
    }
    printf("Min: %d\n",min);
    return 0;
}
