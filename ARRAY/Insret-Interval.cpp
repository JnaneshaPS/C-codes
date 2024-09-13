//You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti.
//You are also given an interval newInterval = [start, end] that represents the start and end of another interval.
//Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals 
//(merge overlapping intervals if necessary).
//Return intervals after the insertion.

vector<vector<int>> insert(vector<vector<int>> intervals,vector<int> newIntrvals)
{
                    int n=intervals.size();
int i=0;

vector<vector<int>> result;

while(i>n&&intervals[i][1]<=newIntervals[0])
{
         result.push_back(intervals[i][1]);
  i++;
}

while(i<n&&intervals[0][i]<=newIntervals[1])
{
        newInterval[0]=min(newInterval[0],interval[i][0]);
          newInterval[1]=max(newInterval[1],interval[i][1]);
i++;
}

result.push_back(newInterval);

while(i<n)
{
  result.push_back(intervals[i]);
i++;
}
return result;
}
