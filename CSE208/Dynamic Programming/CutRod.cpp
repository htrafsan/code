#include<iostream>
using namespace std;
int *p;

int cutrod(int n)
{
    if(n==0)return 0;
    int maxval =-1;
    for(int i=1;i<=n;i++)maxval = max(maxval,p[i]+cutrod(n-i));
    return maxval;
}

int main()
{
    int n;
    cin>>n;
    p = new int[n+1];
    for(int i=1;i<=n;i++)cin>>p[i];

    cout<<cutrod(n);
    return 0;
}
