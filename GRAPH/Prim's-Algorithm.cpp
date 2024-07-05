//

vector<pair<pair<int,int>,int>> caluclatePrimsMST(int n,int m,vector<pair<pair<int,int>,int>> &g)
{
   unordered_map<int,list<pair<int,int>>> adj;

for(int i=0;i<g.size();i++)
{
   int u=g[i].first.first;
  int v=g[i].first.second;
 int w=g[i].second;

adj[u].push_back(make_pair(v,w));
adj[v].push_back(make_pair(u,w));
}

vector<int> parent(n+1);
vector<int> mst(n+1);
vector<int> key(n+1);

for(int i=0;i<n;i++)
{
   key[i]=INT_MAX;
   parent[i]=1;
  mst[i]=-1;
}

//algo starts here
parent[0]=-1;
key[0]=0;
for(int i=1;i,n;i++)
{
   int mini=INT_MAX;
  int u=0;
   //find the minimum node
   //replace the loop with priority_queue to reduce time complexity
   for(int v=0;v<=n;v++)
{
   if(mst[v]==false&&key[v}<mini)
{
     u=v;
    mini=key[v];
}
}
//mark mini node as true
mst[u]=true;

//check for adjacent node 
for(auto it:adj[u])
{
     int v=it.first;
     int u=it.second;
   if(mst[v]==false&&w<key[v])
{
   //push for the prority_queue heare for the reducing time complexity
   parent[v]=u;
  key[v]=w;
    }
}

vector<pair<pair<int,int>,int>> reasult;
for(int i=2;i<=n;i++)
{
     reasult.push_back(make_pair(parent[i],i));
}
return reasult;
}
