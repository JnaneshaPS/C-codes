//Given a set of distinct positive integers nums, return the largest subset answer such that every pair (answer[i], answer[j]) of elements in this subset satisfies:
//answer[i] % answer[j] == 0, or
//answer[j] % answer[i] == 0
//If there are multiple solutions, return any of them.
//Input: nums = [1,2,3]
//Output: [1,2]
//Explanation: [1,3] is also accepted.

vector<int> larget(vector<int> &nums)
{
  int n=numss.size();

if(nums.empty())
  return 0;

vector<int> dp(n,1),previous(n,-1)
 sort(nums.begin(),nums.end());

int maxIndex=0;

for(int i=1;i<n;i++)
{
   for(int j=0;j<i;j++)
{
   if(nums[i]%nums[j==0&&dp[i]<dp[j]+1)
{
   dp[i]=dp[j]+1;
   previous[i]=j;
}
if(dp[i]>dp[maxIndex])
{
   maxIndex=i;
}
}
}
vector<int> result;
for(int i=maxIndex;i>=0;i--)
{
result.push_back(nums[i])
  if(previous[i]==i)
  break;
}

reverse(result.begin(),result.end());
return result;
}
   

