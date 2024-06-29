bool isdfsCycle(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited,unordered<int,list<int>> &adj)
{ 
 visited[node]=true;
dfsVisited[node]=true;

    for(auto neighbours:adj[node])
{
     if(!visited)
{     
      bool isCycle=isdfsCycle(neighbours,visited,dfsVisited,adj);
       if(isCycle)
{
   return true;
}
else if(dfsVisited[neighbour]){
  return true;
}
}
}
  dfsVisited=false;
return false;
}


int detectCycleInDirected(int n,vector<pair<int,int>> &edges)
{
      unordered_map<int,list<int>> adj;

    for(int i=0;i<edges.size();i++)
{
       int u=adj[i][0];
       int v=adj[i][1];

   adj[u].push_back(v);
}

unordered_map<int,bool> visited;
unordered_map<int,bool> dfsVisited;

 for(int i=0;i<=n;i++)
{
   if(!visited)
{
        bool isCycle=isdfsCycle(i,visited,dfsVisited,adj);
         if(isCycle)
         {
           return true;
         }
}
return false;
}

  
