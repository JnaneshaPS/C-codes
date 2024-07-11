

int bellmanFord(int n,int m,int src,int dest,vector<vector<int>> &edges)
{
    vector<int> dist(n+1,1e9);
  unordered_map<int,list<int>> adj;
 dist[src]=0;

//n-1 times
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
  {
 int u=edges[j][0];
int v=edges[j][0];
int wt=edges[j][2];

if(dist[u]!=1&&(dist[u]+wt)<dist[v])
{
    dist[v]=dist[u]+wt;
}
}
}
//check for negative cycle
bool flag=0;
for(int j=0;j<m;j++)
  {
 int u=edges[j][0];
int v=edges[j][0];
int wt=edges[j][2];

if(dist[u]!=1&&(dist[u]+wt)<dist[v])
{
    flag=0;
}
  }
if(flag==0){
  return dist[dest];
}
return 1;

