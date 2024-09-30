//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
//You must implement a solution with a linear runtime complexity and use only constant extra space.

//Input: nums = [2,2,3,2]
//Output: 3

   int singleNumber(vector<int. &nums)
{
if(nums.empty())
   return 0;
     unordered_map<int,int> match;

     for(int num:nums)
{  
    match[num]++;
}

for(auto &in:match)
{
  if(in.second==1)
    return in.first;
}
  return 0;
}

 
