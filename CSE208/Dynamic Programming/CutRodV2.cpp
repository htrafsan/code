#include<iostream>
using namespace std;
int *p;
int *CR;

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

    for(int i=1;i<=n;i++)
    {
        int maxval =-1;
        for(int j=1;j<=i;j++)maxval = max(maxval,p[j]+CR[i-j]);
        CR[i]=maxval;
    }

    cout<<CR[n];
    return 0;
}


