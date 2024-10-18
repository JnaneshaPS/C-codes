//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

//Input: nums = [3,2,3]
//Output: [3]
//Input: nums = [1]
//Output: [1]
//Input: nums = [1,2]
//Output: [1,2]
class Solution{
             vector<int> majority(vector<int> &nums)
{
  int n=nums.size();
  unordered_map<int,int> match;
vector<int> ans;

   for(int i=0;i<nums.size();i++)
{
    match[nums[i]]++;
}

for(auto legend:match)
{
     if(legend.second>n/3)
{
   ans.push_back(legend.first);
}
else{
   continue;
}
}
};
