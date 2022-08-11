#include<stdio.h>
int main()
{
    int n;
    printf("Enter the element you want to sort:");
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i = 0; i < n; i++)
    {
        printf("Enter element#%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {
        int key = a[i];
        j = i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
