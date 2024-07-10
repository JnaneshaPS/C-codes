
void dfs(int node,unordered_map<int,bool> &vis,stack<int> &st,vector<vector<int>> &adj)
{
vis[node]=true;
for(auto neighbhour:adj[node])
{
if(!vis[neighbhour])
{
     dfs(neighbhour,vis,st,adj);
}
}
st.push(node);
}

void revdfs(int node,unordered_map<int,bool> &vis,unordered_map<int,list<int>> &trans)
{
  vis[node]=true;
  for(auto nbr:trans[node])
    {
  if(!vis[nbr])
    {
dfs(nbr,vis,trans);
  }
}
}
int StrongConnectedComponents(int v,vector<vector<int>> &edges)
{
  unordered_map<int,list<int>> adj;

for(int i=0;i<edges.size();i++)
{
 int v=edgesi][0];
int u=edges[i][1];

adj[u].push_back(v);
}
//topological sort
stack<int> st;
unordered_map<int,bool> vis;
for(int i=0;i<v;i++)
{
if(!vis[i])
{
   dfs(i,vis,st,adj);
}
}
//create a trspose graph
unordered_map<int,list<int>> trans;
for(int i=0;i<v;i++)
{
for(auto nbr:adj[i])
{
      trans[nbr].push_back(i);
}
}

//dfs call using above ordering
int cnt=0;
while(!st.empty())
  
{
int top=st.top();
st.pop();
if(!vis[top])
{
count++;
   revdfs(top,vis,trans);
}
}
return count;
}
