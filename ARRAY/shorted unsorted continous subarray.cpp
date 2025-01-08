//Given an integer array nums, you need to find one continuous subarray such that if you only sort this subarray in non-decreasing order, then the whole array will be sorted in non-decreasing order.
//Return the shortest such subarray and output its length.
//Input: nums = [2,6,4,8,10,9,15]
//Output: 5
//Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

int findUnsortedSubarray(vector<int> &nums)
{
   int n=nums.size();

int start=-1,end=-1;

int max_seen=nums[0];
for(int i=1;i<n;i++)
{
   if(nums[i]<max_seen)
{
    end=i;
}else{
   max_seen=nums[i];
}
}

int min_seen=nums[n-1];

for(int i=n-2;i>=0;i--)
{
    if(nums[i]>min_seen)
{
    start=i;
}else{
  min_seen=nums[i];
}
}

if(start==-1)
{
   return 0;
}

return end-start+1;
}
