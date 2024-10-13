//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

//Input: nums = [3,2,3]
//Output: 3

             int majority(vector<int> &nums)
{
     unordered_map<int,int> match;

 for(int i=0;i<nums.size();i++)
{
  match[nums[i]]++;
}

for(auto ele:match)
{
    if(ele.second>nums.size()/2)
{
     return ele.first;
}
}
return -1;
}
