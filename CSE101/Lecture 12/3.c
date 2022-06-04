#include<stdio.h>

int main() {
    int n,i,max;
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1) {
        int num;
        scanf("%d",&num);
        if (i==1 || num>max)
            max= num;
    }
    printf("Max: %d\n",max);
    return 0;
}
