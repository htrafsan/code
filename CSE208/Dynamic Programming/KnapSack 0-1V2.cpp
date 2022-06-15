#include<iostream>
using namespace std;
int *wt;
int *val;
int **KS;

int main()
{
    int n,w;
    cin>>n;
    cin>>w;
    wt = new int[n+1];
    val = new int[n+1];
    KS = new int*[n+1];
    for(int i=0;i<=n;i++)
    {
        KS[i] = new int[w+1];
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)KS[i][j]=0;
            else KS[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        cin>>wt[i];
        cin>>val[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(wt[i]>j)KS[i][j] = KS[i-1][j];
            else KS[i][j] = max(val[i]+KS[i-1][j-wt[i]],KS[i-1][j]);
        }
    }


    cout<<KS[n][w];
    return 0;
}


