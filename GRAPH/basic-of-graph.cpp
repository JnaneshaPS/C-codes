
#include <iostream>
#include<unordered_map>
#include<list>

using namespace std;
  
  class graph
  {
      public:
      unordered_map<int, list<int>> adj;
      
      void addEdge(int u,int v,bool directed){
      //0->undirected graph
      //1-> directed graph
      
      //create edge from u to v
      adj[u].push_back(v);
      
      if(directed==0)
      {
          //undirected so edge from v to u
          adj[v].push_back(u);
      }
      }
      
      void printAdjList(){
          for(auto i:adj){
              cout<<i.first<<"->";
              for(auto j:i.second){
                  cout<<j<<",";
              }
              cout<<endl;
          }
      }
  };
  
int main()
{
    int n,m;
    cout<<"enter the number of edges"<<endl;
    cin>>n;
    cout<<"enter the number of vertices"<<endl;
    cin>>m;
    
    graph g;
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        //create an undirected graph
        g.addEdge(u,v,0);
    }
    
    //printing the graph
    g.printAdjList();
    

    return 0;
}
