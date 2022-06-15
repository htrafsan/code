#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

vector<int> AdjList[Max_V];
stack<int> q;
bool isVisited[Max_V];
int V;
int E;

void DFS(int s)
{
    isVisited[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int i = q.top();
        cout<<i<<" ";
        q.pop();

        for(int j =0;j<AdjList[i].size();j++)
        {
            if(!isVisited[AdjList[i][j]])
            {
                isVisited[AdjList[i][j]] = true;
                q.push(AdjList[i][j]);
            }
        }
    }
}

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

    for(int i=0; i<V ; i++)isVisited[i] = false;


    DFS(0);

    return 0;
}
