//You are given an array of intervals, where intervals[i] = [starti, endi] and each starti is unique.
//The right interval for an interval i is an interval j such that startj >= endi and startj is minimized. Note that i may equal j.
//Return an array of right interval indices for each interval i. If no right interval exists for interval i, then put -1 at index i.
//Input: intervals = [[1,2]]
//Output: [-1]
//Explanation: There is only one interval in the collection, so it outputs -1.

vector<int> rigthIntervals(vector<vector<int>> &intervals)
{
   int n=intervals.size();
   vector<int> ans(n+1,-1);
  map<int,int> siteMap;

for(int i=0;i<n;i++)
{
   siteMap[points[i][0]]=i;
}

for(int i=0;i<n;i++)
{
   int end=intervals[i][1];

auto it=siteMap.lower_bound(end);
if(it!=siteMap.end())
{
  ans[i]=it->second;
}
}
  return ans;
}

 
