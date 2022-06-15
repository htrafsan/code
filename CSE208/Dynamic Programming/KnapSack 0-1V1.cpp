#include<iostream>
using namespace std;
int *wt,*val;
int **ks;
int Knapsack(int n,int w)
{
    if(n==0||w==0)return 0;
    if(ks[n][w]!=-1)return ks[n][w];
    if(wt[n]>w)
    {
        ks[n][w] = Knapsack(n-1,w);
        return ks[n][w];
    }
    ks[n][w]=max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n])+val[n]);
    return ks[n][w];
}

int main()
{
    int n,w;
    cin>>n>>w;
    wt = new int[n+1];
    val = new int[n+1];
    ks = new int*[n+1];
    for(int i=1;i<=n;i++)cin>>wt[i]>>val[i];
    for(int i=0;i<=n;i++)
    {
        ks[i] = new int[w+1];
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)ks[i][j] = 0;
            else ks[i][j] = -1;
        }
    }

    cout<<Knapsack(n,w);
    return 0;
}
