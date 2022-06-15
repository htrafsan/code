#include<iostream>
using namespace std;
int a[100][100]={0};

int ncr(int n,int r)
{
    if(r==0||n==r)return a[n][r];
    if(a[n][r]!=0)return a[n][r];
    a[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return a[n][r];
}

int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }

    cout<<ncr(n,r);
    return 0;
}

