#include<stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i+=1) {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i+=1) {
        printf("%d ",a[i]);
    }
    return 0;
}
