#include<iostream>
using namespace std;
int a[100][100]={0};


int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,r);j++){
                a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }

    cout<<a[n][r];
    return 0;
}


