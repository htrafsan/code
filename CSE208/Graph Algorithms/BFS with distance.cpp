#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

vector<int> AdjList[Max_V];
queue<int> q;
bool isVisited[Max_V];
int dis[Max_V];
int V;
int E;

void BFS(int s)
{
    isVisited[s] = true;
    dis[s] = 0;
    q.push(s);

    while(!q.empty())
    {
        int i = q.front();
        cout<<"Node: "<<i<<"  dis: "<<dis[i]<<endl;
        q.pop();

        for(int j =0;j<AdjList[i].size();j++)
        {
            if(!isVisited[AdjList[i][j]])
            {
                isVisited[AdjList[i][j]] = true;
                dis[AdjList[i][j]] = dis[i]+1;
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

    for(int i=0; i<V ; i++){
            isVisited[i] = false;
            dis[i] = -1;
    }


    BFS(0);

    return 0;
}

