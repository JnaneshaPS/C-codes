//Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray
// whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

//Input: target = 7, nums = [2,3,1,2,4,3]
//Output: 2
//Explanation: The subarray [4,3] has the minimal length under the problem constraint.


 int subArraySum(vector<int> &nums,int target)
{
    int left=0;
    int minLength=INT_MAX;
    int currentSum=0;
    int n=nums.size();

 for(int i=0;i<n;i++)
{
    currentSum+=nums[i];

while(currentSum>=target)
{
    minLength=min(minLength,i-right+1);
    currentSum-=nums[left];
left++;
}
}

return (maxLength==INT_MAX)?0:minLength;
}

 
