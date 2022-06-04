#include<stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i+=1) {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (i=0;i<n;i+=1) {
        sum= sum + abs(a[0]-a[i]);
    }
    printf("%d\n",sum);
    return 0;
}
