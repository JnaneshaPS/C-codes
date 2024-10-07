//Given an integer array nums, find a subarray that has the largest product, and return the product.
//The test cases are generated so that the answer will fit in a 32-bit integer.
//Input: nums = [2,3,-2,4]
//Output: 6
//Explanation: [2,3] has the largest product 6.

     int Maximum(vector<int> &nums)
{
    if(nums.empty())
      return 0;

int minProduct=nums[0];
int maxProduct=nums[0];
int result=nums[0];

for(int i=1;i<nums.size();i++)
{
      if(nums[i]<0)
{
    swap(maxProduct,minProduct);
}
maxProduct=max(nums[i],nums[i]*maxProduct);
minProduct=min(nums[i],nums[i]*minProduct);
  result=max(result,maxProduct);
}
return result;
}
