//Given an integer array nums, return the length of the longest strictly increasing subsequence
//Input: nums = [10,9,2,5,3,7,101,18]
//Output: 4
//Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
//Input: nums = [0,1,0,3,2,3]
//Output: 4
//Input: nums = [7,7,7,7,7,7,7]
//Output: 1

int LIS(vector<int> &nums)
{
  if(nums.empty())
    return 0;

vector<int> dp(n,1);

for(int i=1;i<nums.size();i++)
{
  for(int j=0;j<i;j++)
{
   dp[i]=max(dp[i],dp[j]+1);
}
}
return max_element(nums.begin(),nums.end());
}
