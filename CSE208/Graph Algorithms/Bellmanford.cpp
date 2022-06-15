#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

class Edge
{
public:
    int s, d, w;
};

class Edge *GraphEdges;

int *Distance;
int V;
int E;

void BellmanFord()
{
    Distance[0] = 0;

    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = GraphEdges[j].s;
            int v = GraphEdges[j].d;
            int weight = GraphEdges[j].w;
            if (Distance[u] != 9999 && Distance[u] + weight < Distance[v])
                Distance[v] = Distance[u] + weight;
        }
    }

}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;

    GraphEdges = new Edge[E];
    Distance = new int[V];
    for(int i=0;i<V;i++)Distance[i]=9999;

    int Node1,Node2,Weight;
    for(int i = 0; i < E; i++)
    {
        cin>>Node1>>Node2>>Weight;
        GraphEdges[i].s = Node1, GraphEdges[i].d = Node2, GraphEdges[i].w = Weight;
    }

    BellmanFord();

    for(int i=0;i<V;i++)cout<<Distance[i]<<" ";

    return 0;
}


