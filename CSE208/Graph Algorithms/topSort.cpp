#include <bits/stdc++.h>
using namespace std;
#define Max_V 100

vector<int> AdjList[Max_V];
bool isVisited[Max_V];
int V;
int E;
stack<int> s;

void topSort(int i)
{
    isVisited[i] = true;

    for(int j =0;j<AdjList[i].size();j++)
    {
        if(!isVisited[AdjList[i][j]])topSort(AdjList[i][j]);
    }
    s.push(i);
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


    for(int i=0;i<V;i++)if(!isVisited[i])topSort(i);


    for(int i=0;i<V;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}


