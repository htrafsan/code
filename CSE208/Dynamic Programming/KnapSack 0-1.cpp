#include<iostream>
using namespace std;
int *wt,*val;

int Knapsack(int n,int w)
{
    if(n==0||w==0)return 0;
    if(wt[n]>w)return Knapsack(n-1,w);
    return max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n])+val[n]);
}

int main()
{
    int n,w;
    cin>>n>>w;
    wt = new int[n+1];
    val = new int[n+1];
    for(int i=1;i<=n;i++)cin>>wt[i]>>val[i];

    cout<<Knapsack(n,w);
    return 0;
}
