//Given an integer array nums, return all the different possible non-decreasing subsequences of the given array with at least two elements. You may return the answer in any order.
//Input: nums = [4,6,7,7]
//Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]
//Input: nums = [4,4,3,2,1]
//Output: [[4,4]]


void backtrack(int start,vector<int> &nums,vector<int> &current,set<vector<int>> &uniqueSet)
{
  if(current.size()>1)
{
    uniqueSet.insert(current);
}

for(int i=start;i<nums.size();i++)
{
    if(current.empty() || current.back()<=nums[i])
{
    current.push_back(nums[i]);
   backtrack(i+1,nums,current,uniqueSet);
  current.pop_back();
}
}
}

vector<vector<int>> findDecSubseq(vector<int> &nums)
{
  set<vector<int>> uniqueSet;
vector<int> current;

backtrack(0,nums,current,uniqueSet);

vector<vector>> ans(uniqueSet.begin(),uniqueSet.end());
return ans;
}
