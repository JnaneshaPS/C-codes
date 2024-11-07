//Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
//Input: nums = [3,2,1]
//Output: 1
//Explanation:
//The first distinct maximum is 3.
//The second distinct maximum is 2.
//The third distinct maximum is 1.

int thirdLrgest(vector<int> &nums)
{
    int count=0;
  int n=nums.size();
  sort(nums.begin(),nums.end());

  for(int i=n-1;i>=0;i++)
{
    if(nums[i-1]!=nums[i])
{
   cnt++;
}
if(cnt==3)
{
   return nums[i-1]
}
}
return nums[n-1];
}

