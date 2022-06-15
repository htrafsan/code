
#include<iostream>
using namespace std;
int *a;
int f(int n)
{
    if(n==0||n==1)return n;
    if(a[n]!=-1)return a[n];
    a[n] = f(n-1)+f(n-2);
    return a[n];
}

int main()
{
    int n;
    cin>>n;
    a= new int[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)a[i]=-1;

    cout<<f(n);
    return 0;
}
