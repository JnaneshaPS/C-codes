//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

void backtrackz(vector<int> &nums,vecctor<vector<int>> &reasult,vector<int> &combination,vector<bool> &used)
{
         if(combination.size()==nums.size())
{
reasult.push_back(combination);
return ;
}

for(int i=0;i<n;i++){
if(used[i])
{
      continue;
}
used[i]=true;
combination.push_back(nums[i]);

backtrack(nums,reasult,combination,used);

combination.pop_back();
used[i]=false;
}
}

vector<vector<int>> permute(vector<int> nums)
{
      vector<vector<int>> reasult;
         vector<int> combination;
        vector<used> used(nums.size(),false);
backtrack(nums,reasult,combination,used);
return reasult;
}
