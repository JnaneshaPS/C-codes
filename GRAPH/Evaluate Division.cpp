//You are given an array of variable pairs equations and an array of real numbers values, where equations[i] = [Ai, Bi] and values[i] represent the equation Ai / Bi = values[i].
//Each Ai or Bi is a string that represents a single variable.
//You are also given some queries, where queries[j] = [Cj, Dj] represents the jth query where you must find the answer for Cj / Dj = ?.
//Return the answers to all queries. If a single answer cannot be determined, return -1.0.
//Note: The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.
//Note: The variables that do not occur in the list of equations are undefined, so the answer cannot be determined for them.

//Input: equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]
//Output: [6.00000,0.50000,-1.00000,1.00000,-1.00000]
//Explanation: 
//Given: a / b = 2.0, b / c = 3.0
///queries are: a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ? 
//return: [6.0, 0.5, -1.0, 1.0, -1.0 ]
//note: x is undefined => -1.0
   double dfs(unordered_map<string,unordered_map<string,double>> graph,const string& start,const string& end,unordered_map<string,bool> &visited)
{
  if(graph.find(start)==graph.end()||graph.find(end)==graph.end())
{
return -1.0;
}
if(start==end)
{
return 1.0;
}
     visited[start]=true;
for(auto &neighbhour:graph[start])
{
    string next=neighbhour.first;
     double value=neighbhour.second;
  if(!visited[next])
{
    double tempResult=dfs(graph,next,end,visited);
if(tempReasult!=0)
{
    return tempReasult*value;
}
}
}
return -1.0;
}

vector<double> evalDivision(vector<vector<string>> &equations,vector<double> &values,vector<vector<string>> &queries)
{
    if(equations.empty())
{
   return {-1.0};
}

unordered_map<string,unordered_map<string,double>> graph;

for(int i=0;i<equations.size();i++)
{
    string a=graph[i][0];
     string b=graph[i][1];
     double value=values[i];
   graph[a][b]=value;
   grapg[b][a]=1/value;
}

vector<double> ans;

for(auto query:queries)
{
   string start=query[0];
   string end=query[1];
    unordered_map<string,bool> visited;
   double result=dfs(graph,start,end,visited);
   ans.push_back(result);
}
return ans;
}
