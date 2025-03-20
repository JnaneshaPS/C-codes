//Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.


int minSizeSubArrray(vector<int> &nums,int target)
{
        int left=0,sum=0,minLength=INT_MAX;

for(int right=0;right<nums.size();right++)
{
   sum+=nums[right];

while(sum>=target)
{
    minLength=min(minLength,right-left+1);
    sum-=nums[left];
      left++;
}
}

return (minLength==INT_MAX)?0:minLength;
}
