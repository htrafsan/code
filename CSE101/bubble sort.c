#include<stdio.h>
int a[]= {1,3,2,9,5,8,7},n;
void sort() {
    int i,j;
    for (i=0;i<n;++i) {
        for (j=0;j<n-1-i;++j) {
            if (a[j]>a[j+1]) {
                int t= a[j];
                a[j]= a[j+1];
                a[j+1]= t;
            }
        }
    }
}

int main() {
    n= sizeof(a)/sizeof(int);
    sort();
    int i;
    for (i=0;i<n;++i)
        printf("%d ",a[i]);

    return 0;
}





