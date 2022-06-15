#include <bits/stdc++.h>
using namespace std;
#define Max_V 100
class Edge
{
public:
    int d, w;
};

vector<Edge> AdjList[Max_V];
int V;
int E;
bool *SPTSet;
int *Distance;

int minDistance()
{
    int min = 9999, min_index;

    for (int v = 0; v < V; v++)
        if (SPTSet[v] == false && Distance[v] < min)
            min = Distance[v], min_index = v;

    return min_index;
}

void Dijkstra()
{
    Distance[0] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        int u = minDistance();
        cout<<u<<endl;
        SPTSet[u] = true;
        for (int j = 0; j < AdjList[u].size(); j++){
            int v = AdjList[u][j].d;
            if (SPTSet[v] == false && AdjList[u][j].w+Distance[u] < Distance[v])
                Distance[v] = AdjList[u][j].w+Distance[u];
        }
    }
}


int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;
    SPTSet = new bool[V];
    Distance = new int[V];
    int Node1,Node2,Weight;
    for(int i = 0; i < E; i++)
    {
        cin>>Node1>>Node2>>Weight;
        Edge e;
        e.d= Node2, e.w = Weight;
        AdjList[Node1].push_back(e);
        e.d= Node1, e.w = Weight;
        AdjList[Node2].push_back(e);
    }

    for(int i=0;i<V;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<AdjList[i].size();j++)cout<<"("<<AdjList[i][j].d<<" "<<AdjList[i][j].w<<"), ";
        cout<<endl;
    }

   for(int i=0; i<V ; i++){
            SPTSet[i] = false;
            Distance[i] = 9999;
    }

    Dijkstra();

    for(int i=0;i<V;i++)cout<<Distance[i]<<" ";

    return 0;
}
