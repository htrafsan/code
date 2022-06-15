#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

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

bool isCycle()
{
    int Node1,Node2;
    for(int i = 0; i < E; i++)
    {
        cin>>Node1>>Node2;
        int x = find(Node1);
        int y = find(Node2);

        if (x == y)
            return true;

        Union(x, y);
    }

    return false;
}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>V>>E;
    for(int i=0;i<V;i++)parent[i]=i;

    cout<<isCycle();

    return 0;
}

