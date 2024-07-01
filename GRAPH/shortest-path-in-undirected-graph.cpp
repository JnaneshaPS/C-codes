
vector <int> shortestPath(vector<vector<int>> &edges,int n,int m,int src,int dest)
{
  //craete adjacency list
    unordered_map<int,list<int>> adj;
   for(int i=0;i<edges.size();i++)
{
     int u=edges[i][0];
   int v=edges[i][1];

  adj[u].push_back(v);
 adj[v].push_back(u);
}

  //do bfs
unordered_map<int,bool> visited;
unordered_map<int,int> parent;
queue<int> q;
q.push(src);
parent[src]=-1;
visited[src]=true;

while(!q.empty())
{
   int front=q.front();
   q.pop();

for(auto i;adj[front])
{
   if(!visited[i])
{
     visited[i]=true;
    parent[i]=front;
      q.push(i);
}
}
}

//prepare shortest path
vector<int> ans;
int currentNode=dest;
ans.push_back(dest);

while(currentNode!=src)
{
   currentNode=parent[currentNode];
  ans.push_back(currentNode);
}
reverse(ans.begin(),ans.end());

return ans;
}
   
