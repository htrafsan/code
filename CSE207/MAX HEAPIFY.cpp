#include<iostream>
#include<cstdio>
using namespace std;
void max_heapify(int *a,int i,int n)
{
    int j, temp;
    temp = a[i];
    j = 2*i;
    while (j<=n)
    {
        if ((j<n)&&(a[j+1] > a[j]))
        {
            j=j+1;
        }
        if (temp>a[j])
        {
            break;
        }
        else if (temp<=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=temp;
    return;
}

void build_maxheap(int *a,int n)
{
    int i;
    for(i=n/2; i>=1; i--)
    {
        max_heapify(a,i,n);
    }
}

int main(void)
{
    int n, i, x;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[200];
    for (i=1; i<=n; i++)
    {
        printf("\nEnter the elements #%d: ",i);
        scanf("%d",&a[i]);
    }
    build_maxheap(a,n);
    printf("\nMaxheap sequence is: ");
    for (i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
