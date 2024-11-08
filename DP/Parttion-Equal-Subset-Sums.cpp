//Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.
//Input: nums = [1,5,11,5]
//Output: true
//Explanation: The array can be partitioned as [1, 5, 5] and [11].

bool partitionSum(vector<int> &nums)
{
    int total_sum=0;
  
for(int i=0;i<nums.size();i++)
{
   total_sum+=nums[i];
}

int half_sum=total_sum/2;
vector<bool> dp(half_sum+1,false;
for(int num:nums)
{
for(int j=half_sum;j>=num;j--)
{
   dp[i]=dp[i]||dp[j-num];
}
}
return dp[half_sum];
}
