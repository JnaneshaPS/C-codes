 
void dfs(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,vector<int> &reasult,unordered_map<int,list<int>> adj,unordered_map<int,bool> &vis)
{
   vis[node]=true;
  disc[node]=low[node]=timer++;

for(auto neighbour:adj[node])
{
    if(neighbour==parent)
       continue;
  else if(!vis[neighbour])
{
  dfs(neighbour,node,timer,disc,low,reasult,adj,vis);
  low[node]=min(low[node],low[neighbour]);
  //check edge is bridge
  if(low[neighbour]>disc[node])
  {
     vector<int> ans;
    ans.push_back(node);
    ans.push_back(neighbour);
    reasult.push_back(neighbour);
  }
}
else {
      //back edge
     low[node]=min(low[node],disc[neighbour]);
}
}
}
vector<vector<int>> findBridges(vector<vector<int>> &edges,int v,int e)
{
  unordered_map<int,list<int>> adj;

for(int i=0;i<edges.size();i++)
{
int u=edges[i][0];
int w=edges[i][1];

adj[w].push_back(u);
  adj[u].push_back(w);

}

int timer=0;
vector<int> disc(v);
vector<int> low(v);
int parent=-1;
unordered_map<int,bool> vis;

for(int i=0;i<v;i++)
{
  disc[i]=-1;
low[i]=-1;
}

vector<vector<int>> reasult;

for(int i=0;i<v;i++)
{
if(!vis[i])
{
  dfs(i,parent,timer,disc,low,reasult,adj,vis);
}
