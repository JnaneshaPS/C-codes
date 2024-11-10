//Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.
//Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.
//Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
//Output: 1
//Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.


int nonOverlaping(vector<vector<int>> &intervals)
{
    int count=0;

sort(points.begin(),points.end(),[](vector<int> &a,vector<int> &b)
{
   return a[1]<b[1];
}

  int prevEnd=intervals[0][1];

for(int i=1;i<intervals.size();i++)
{
    if(intervals[i][0]<prevEnd)
{
   count++;
}
else
{
    prevEnd=intervals[i][1];
}
}
return count;
}
 
