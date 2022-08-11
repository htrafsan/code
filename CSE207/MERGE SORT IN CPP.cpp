#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[10];
void merge(int p, int q, int r)
{
    int b[10];
    int i = p;
    int j = q +1 ;
    int k = p ;
    while((i<=q)&&(j<=r))
    {
        if (a[i]<=a[j])
            b[k++] = a[i++] ;
        else
            b[k++] = a[ j++] ;
    }
    while( i <= q )
        b[k++]=a[i++];
    while( j <= r )
        b[k++]=a[j++];
    for(i=p; i<=r; i++)
        a[i]=b[i];
}
void mergesort(int p, int r )
{
    int q;
    if(p!=r)
    {
        q = (p+r)/2;
        mergesort( p , q );
        mergesort( q+1, r );
        merge(p, q, r );
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted list is :\n");
    for (int i=0 ; i<n ; i++)
    {
        printf ("%d ", a[i]);
    }
    mergesort(0,n-1);
    printf("\nSorted list is :\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
