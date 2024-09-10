//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

void backtrack(vector<int> &nums,vector<vector<int>> reasult,vector<int> &combination,vector<bool> &used)
{

if(combination.size()==nums.size())
{
reasult.push_back(combination);
return;
}

for(int i=0;i<nums.size();i++)
{
if(i>0&&nums[i]==nums[i-1]&&!used[i-1)
{
continue;
}
if(used[i])
{
continue;
}
used[i]=true;
combination.push_back(nums[i]);
backtrack(nums,reasult,combination,used)
  combination.pop_back();
used[i]=false;
}
}
vector<vector<int>> permute(vector<int> nums)
{
           vector<vector<int>> result;
  vector<int> cobination;
  vector<bool> used(nums.size(),false);
  backtrack(nums,result,combination,used);
  return result;
  
}
