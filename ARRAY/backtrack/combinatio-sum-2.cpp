//Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
//Each number in candidates may only be used once in the combination.
//Note: The solution set must not contain duplicate combinations.
void backtrack(vector<int> &nums,int target,vector<vector<int>> &reasult,vector<int> &combination,int start)
{
          if(target==0)
{
            reasult.push_back(combination);
return;
}

                   for(int i=start;i<nums.size();i++){
              if(i>start&&candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
              break;
        combination.push_back(nums[i]);
backtrack(nums,target-nums[i],reasult,combination,i+1);
combination.pop_back();
                   }
}

vector<vector<int>> combination(vector<int> &nums,int target)
{
  vector<vector<int>> result;
  vector<int> combination;
  sort(nums.begin(),nums.end());
  backtrack(nums,target,reasult,combination,0);
  return reasult;
}
}
