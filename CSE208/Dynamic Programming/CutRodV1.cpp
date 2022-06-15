#include<iostream>
using namespace std;
int *p;
int *CR;

int cutrod(int n)
{
    if(n==0)return 0;
    if(CR[n]!=-1)return CR[n];
    int maxval =-1;
    for(int i=1;i<=n;i++)maxval = max(maxval,p[i]+cutrod(n-i));
    CR[n]=maxval;
    return CR[n];
}

int main()
{
    int n;
    cin>>n;
    p = new int[n+1];
    CR =new int[n+1];
    CR[0]=0;
    for(int i=1;i<=n;i++){
            cin>>p[i];
            CR[i]=-1;
    }

    cout<<cutrod(n);
    return 0;
}

