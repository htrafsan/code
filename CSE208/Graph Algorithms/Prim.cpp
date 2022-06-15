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
bool *MSTSet;
int *Key;
int *Parent;

int minKey()
{
    int min = 9999, min_index;

    for (int v = 0; v < V; v++)
        if (MSTSet[v] == false && Key[v] < min)
            min = Key[v], min_index = v;

    return min_index;
}

void prim()
{
    Key[0] = 0;
    Parent[0] = -1;
    for (int i = 0; i < V - 1; i++)
    {
        int u = minKey();
        MSTSet[u] = true;
        for (int v = 0; v < AdjList[u].size(); v++)
            if (MSTSet[v] == false && AdjList[u][v].w < Key[v])
                Parent[v] = u, Key[v] = AdjList[u][v].w;
    }
}

void printMST()
{
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout<<Parent[i]<<" - "<<i<<" \t"<<AdjList[i][Parent[i]].w<<" \n";
}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;
    MSTSet = new bool[V];
    Key = new int[V];
    Parent =  new int[V];
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
            MSTSet[i] = false;
            Key[i] = 9999;
    }

    prim();


    printMST();

    return 0;
}
