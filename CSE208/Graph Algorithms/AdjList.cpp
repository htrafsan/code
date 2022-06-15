#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

vector<int> AdjList[Max_V];
int V;
int E;


int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;

    int Node1,Node2;
    for(int i = 0; i < E; i++)
    {
        cin>>Node1>>Node2;
        AdjList[Node1].push_back(Node2);
    }

    for(int i=0; i<V ; i++)
    {
        for(int j=0; j<AdjList[i].size(); j++)cout<< AdjList[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
