#include<cstdio>
#include<cmath>
int a[100];
void merge(int p,int q, int r)
{
    int b[100];
    for(int l=p; l<=r; l++)
    {

        b[l]=a[l];
    }
        int i=p;
        int j=q+1;
        int z=r;
        while(i<=q && j<=r)
        {
            if(b[i]<=b[j])
            {
                a[z]=b[i];
                i++;
            }
            else
            {
                a[z]=b[j];
                j++;
            }
            z++;
        }
        if(j>r)
        {
            for(int m=z; m<=r; m++)
            {
                a[z]=b[z];
            }
        }
        else
        {
            for(int m=z; m<=r; m++)
            {
                a[z]=b[z];
            }
        }
    }


void mergesort(int p, int r)
{
    int q;
    if(q<r)
    {
        q=floor((p+r)/2);
        mergesort(p,r);
        mergesort(q+1,r);
        merge(p,q,r);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(0,n-1);
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}
