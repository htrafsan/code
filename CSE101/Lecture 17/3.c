#include<stdio.h>

int main() {
    int row=3,col=3;
    int a[row][col];
    int i,j;
    for (i=0;i<row;++i) {
        for (j=0;j<col;++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<row;++i) {
        maximum= a[i][0];
        for (j=0;j<col;++j) {
            if (a[i][j]>maximum)
                maximum= a[i][j];
        }
        printf("Max of row %d: %d\n",i,maximum);
    }

    return 0;
}
