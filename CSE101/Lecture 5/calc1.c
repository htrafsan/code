#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);

    int res= a+b;
    printf("%d+%d= %d\n",a,b,res);
    res= a-b;
    printf("= %d\n",res);
    res= a*b;
    printf("= %d\n",res);
    res= a/b;
    printf("= %d\n",res);

    return 0;
}
