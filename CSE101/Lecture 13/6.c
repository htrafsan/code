#include<stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i+=1) {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i+=1) {
        int sum=0;
        for (j=0;j<n;j+=1) {
            sum= sum + abs(a[i]-a[j]);
        }
        printf("%d: %d\n",a[i],sum);
    }
    return 0;
}
