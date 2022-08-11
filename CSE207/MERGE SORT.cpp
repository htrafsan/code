#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#define MAX 4
using namespace std;
int array[MAX];
void merge(int low, int mid, int high)
{
    int temp[MAX];
    int i = low;
    int j = mid +1 ;
    int k = low ;
    while((i<=mid)&&(j<=high))
    {
        if (array[i]<=array[j])
            temp[k++] = array[i++] ;
        else
            temp[k++] = array[ j++] ;
    }
    while( i <= mid )
        temp[k++]=array[i++];
    while( j <= high )
        temp[k++]=array[j++];
    for(i=low; i<=high; i++)
        array[i]=temp[i];
}
void mergesort(int low, int high )
{
    int mid;
    if(low!=high)
    {
        mid = (low+high)/2;
        mergesort( low , mid );
        mergesort( mid+1, high );
        merge(low, mid, high );
    }
}
int main(void)
{
    int i,n,num=0;
    printf("\nEnter the elements of the array: ");
    for(i=0; i<MAX; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe elements of the array are: ");
    for(i=0; i<MAX; i++)
    {
        printf("%d",array[i]);
    }
    mergesort(0,MAX-1);
    printf ("\nSorted list is :\n");
    for ( i = 0 ; i<MAX ; i++)
    {
        printf ("%d ", array[i]);
    }
    return 0;
}
