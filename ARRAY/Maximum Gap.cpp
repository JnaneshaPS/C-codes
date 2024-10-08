//Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.
//You must write an algorithm that runs in linear time and uses linear extra space.
//Input: nums = [3,6,9,1]
//Output: 3
//Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.

    int maxGap(vector<int> &nums)
{
     int n=nums.size();
    if(n<2)
      return 0;

   sort(nums.begin(),nums.end());

int max_gap=0;

for(int i=1;i<n;i++)
{
    max_gap=max(max_gap,nums[i]-nums[i-1]);
}
return max_gap;
}
