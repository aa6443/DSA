#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int , list<int>> adj;

    //adding 
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        //checking directed or undirected 
        //direction = 0 ->undirected 
        //direction = 1 -> directed5
        
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    //printing function 
    void printAdjList(){
        for(auto i:adj){
            cout << i.first <<"->";
            for(auto j: i.second){
                cout<< j << ", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of nodes : "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges : "<<endl;
    cin>>m;
    Graph g;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        //creating undirected graph 
        g.addEdge(u,v,0);
    }
    //printing graph 
    g.printAdjList();

    return 0;
}