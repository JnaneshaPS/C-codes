//Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
//Input: nums = [1,2,3,4,5]
//Output: true
//Explanation: Any triplet where i < j < k is valid.

bool triplts(vector<int> &nums)
{
  int first=INT_MAX;
  int second=INT_MAX;

for(int num:nums)
{
   if(num<=first)
{
   first=num;
}
else if(num<=second)
{
   second=num;
}
else
{
   return true;
}
}
return fasle;
}
