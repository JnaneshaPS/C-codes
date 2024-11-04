//Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.
//The test cases are generated so that the answer can fit in a 32-bit integer.

int combinationSum4(vector<int> &nums,int target)
{
   vector<long long> dp(target+1,0)
dp[0]=1;

for(int i=1;i<=target;i++)
{
   for(int num:nums)
{
   if(num<=i)
{
   dp[i]+=dp[t-num];
  if(dp[i]>INT_MAX)
    dp[i]=INT_MAX;
}
}
}
return static_cast<int> (dp[target]);
}
