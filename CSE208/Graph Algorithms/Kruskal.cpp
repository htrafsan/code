#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

class Edge
{
public:
    int s, d, w;
};

class Edge *GraphEdges;
class Edge *MSTEdges;

int parent[Max_V];
int V;
int E;

int find(int i)
{
    if (parent[i] == i)
        return i;
    return find(parent[i]);
}

void Union(int x, int y)
{
    int xset = find(x);
    int yset = find(y);
    if(xset != yset)
    {
        parent[xset] = yset;
    }
}

void MST()
{
    int e = 0;
    int i = 0;

    while (e < V - 1 && i < E)
    {
        Edge next_edge = GraphEdges[i++];
        int x = find(next_edge.s);
        int y = find(next_edge.d);
        if (x != y)
        {
            MSTEdges[e]=next_edge;
            Union(x, y);
            e++;
        }
    }
}

int myComp(const void* a, const void* b)
{
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    return a1->w > b1->w;
}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;

    GraphEdges = new Edge[E];
    MSTEdges = new Edge[V-1];
    for(int i=0;i<V;i++)parent[i]=i;

    int Node1,Node2,Weight;
    for(int i = 0; i < E; i++)
    {
        cin>>Node1>>Node2>>Weight;
        GraphEdges[i].s = Node1, GraphEdges[i].d = Node2, GraphEdges[i].w = Weight;
    }

    for (int i = 0; i < E; ++i)cout<<GraphEdges[i].s<<" -- "<<GraphEdges[i].d<<" == "<<GraphEdges[i].w<<endl;
    cout<<endl;

    qsort(GraphEdges, E, sizeof(Edge),myComp);

    for (int i = 0; i < E; ++i)cout<<GraphEdges[i].s<<" -- "<<GraphEdges[i].d<<" == "<<GraphEdges[i].w<<endl;
    cout<<endl;

    MST();

   for (int i = 0; i < V-1; ++i)cout<<MSTEdges[i].s<<" -- "<<MSTEdges[i].d<<" == "<<MSTEdges[i].w<<endl;

    return 0;
}


