//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
//Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
//Output: [[1,6],[8,10],[15,18]]
//Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].


vector<vector<int>> merge(vector<vector<int>> &intervals)
{
  vector<vector<int>> merged;
 sort(intervals.begin(),intervals.end());

  if(intervals.empty()) return {};

merged.push_back(intervals[0]);

for(int i=1;i<n;i++)
{
   vector<int> &last=merged.back();

if(intervals[[i][0]<=last[1]){
last[1]=max(last[1].intervals[i][1];
}else{
  merged.push_back(intevals[1i);
}
}
return merged;
}
  
