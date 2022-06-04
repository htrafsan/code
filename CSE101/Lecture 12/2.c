#include<stdio.h>

int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1) {
        int num;
        scanf("%d",&num);
        sum= sum+num;
    }
    printf("Sum: %d\n",sum);
    printf("Avg: %f\n",(float)sum/n);
    return 0;
}






