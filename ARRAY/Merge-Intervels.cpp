//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
//and return an array of the non-overlapping intervals that cover all the intervals in the input.

vector<vector<int>> mergeIntervels(vector<int> &intervels)
{
  if(intervels.empty())
    return {};
int n=intervels.size();
              vector<vector<int>> merge;
      sort(intervels.begin(),intervels.end();
        merge.push_back(intervels[0]);
for(int i=1;i<n;i++)
{
     if(intervels[i][0]<=intervels.back()[1])
{
       merge.back()[1]=max(merge.back()[1],intervels[1][i]);
}
else{
merge.push_back(intervels[i]);
}
}
return merge;
}
