#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph{
    int n;
    vector<int> *adj;

    public:
        Graph(int n);
        void addEdge(int u,int v);
        void bfs(int s);
};

Graph::Graph(int n){
    this->n = n;
    adj = new vector<int>[n];
}

void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}

void Graph::bfs(int s){
    bool visited[n];
    for (int i=0;i<n;i++)
        visited[i] = false;

    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        cout<<p<<" ";
        for(int i=0;i<adj[p].size();i++){
            if(!visited[adj[p][i]]){
                q.push(adj[p][i]);
                visited[adj[p][i]]=true;
            }
        }
    }
}

int main(){
    int n,m,x,y;
    cin>>n>>m;

    Graph graph(n);
    for(int i=0;i<m;i++){
        cin>>x>>y;
        graph.addEdge(x,y);
    }
    graph.bfs(0);
    return 0;
}
