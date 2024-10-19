//Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
//Find the two elements that appear only once. You can return the answer in any order.
//You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
//Input: nums = [1,2,1,3,2,5]
//Output: [3,5]
//Explanation:  [5, 3] is also a valid answer.
//Input: nums = [-1,0]
//Output: [-1,0]

   vector<int> single(vector<int> &nums)
{
    unordered_map<int,int>  match;
vector<int> ans;

for(int i=0;i<nums.size();i++)
{
   match[nums[i]]++;
}

for(auto legend:match)
{
   if(legend.second==1)
{
   ans.push_back(legend.first);
}
else
{
   continue;
}
}
return ans;
}
