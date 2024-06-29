

bool isCyclic(int i,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj)
{ 
  unordered_map<int,int> parent;

parent[i]=-1;
visited[i]=1;

queue<int> q;
q.push(i);

while(!q.empty()){
int front=q.front();
q.pop();

for(auto neighbour: adj[front]){
  if(visited[neighbour]==true&&neightbour!=parent[front])
{
return true;
}
else if(!visited[neighbour])
{
     q.push(neighbour);
  visited[neighbour]=1;
  parent[neighbour]=front;
}
}
}
return false;
}
       

string cycleDetection(vector<vector<int>> &edges,int n,int m)
{
//creating adjacency list
   unordered_map<int,list<int>> adj;
  for(int i=0;i<m;i++){
   int u=adj[i][0];
int v=adj[i][1];

   adj[v].push_back(u);
  adj[u].push_back(v);
}

//to handle disconnected component

  unordered_map<int,bool> visited;
 for(int i=0;i<n;i++){
  if(!visited[i])
{
   bool ans=isCyclic(i,visited,adj);
    if(ans==1)
          return "Yes";
  }
}
       return "No";
}
