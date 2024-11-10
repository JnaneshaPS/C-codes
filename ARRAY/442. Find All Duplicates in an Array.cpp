//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, 
//return an array of all the integers that appears twice.
//You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output


int findAllDuplicates(vector<int> &nums)
{
     vector<int> nums;

for(int i=0;i<nums.size();i++)
{  
   int index=abs(nums[i])-1;
   if(nums[index]<0)
{
  ans.push_back(nums[i]);
}
else
{
   nums[index]=-nums[index];
}
}
return ans;
}
