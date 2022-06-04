#include<stdio.h>

int main() {
    int a[2][3];
    int i,j;
    for (i=0;i<2;++i) {
        for (j=0;j<3;++j) {
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<2;++i) {
        for (j=0;j<3;++j) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
