//Given a binary array nums, return the maximum number of consecutive 1's in the array.
//Input: nums = [1,1,0,1,1,1]
//Output: 3
//Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
//Input: nums = [1,0,1,1,0,1]
//Output: 2

int maxConsoneCount(vector<int> &nums)
{
   int count=0;
int maxCount=0;

for(int i=0;i<nums.size();i++)
{
   if(nums[i]=1)
{
   count++;
  maxCount=max(count,maxCount);
}
else{
   count=0;
}
}
return maxCount;
}
