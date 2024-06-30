

void dfsSort(int node,unordered_map<int,bool> &visited,stack <int> &s,unordered<int,list<int>> &adj)
{
      visited[node]=1;
      for(auto neighbour:adj[node])
{
     if(!visited[neighbour])
    dfsSort(neighbour,visited,s,adj);
}
s.push(node);
}

vector<int> topological(int v,int e,vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> adj;

    for(int i=0;i<e;i++)
{
       int u=edges[i][0];
       int v=edges[i][1];

      adj[u].push_back(v);
}

 //caling the dfs util for all components
      unordered_map<int,bool> visited;
      stack <int> s;
      for(int i=0;i<v;i++)
{   
       if(!visited)
           dfsSort(i,visited,s,adj);
}

vector<int> ans;

while(!s.empty())
{
    ans.push_back(s.top());
   s.pop();
}
return ans;
}
