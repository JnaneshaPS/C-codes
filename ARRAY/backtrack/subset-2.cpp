//Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.


void backtrack(vector<int> &nums,vector<vector<int>> &result,vector<int> &combination,int start)
{
                result.push_back(combination);
               for(int i=start;i<nums.size();i++)
{          
                      if(i>0&&nums[i-1]==nums[i])
                      {
             continue;
                      }
                combination.push_back(nums[i]);
           backtrack(nums,result,combination,i+1);
              combination.pop_back();
}
}

vector<vector<int>> subset(vector<int> &nums)
{
         vector<vector<int>> result;
             vector<int> combination;
             backtrack(nums,result,combination,0);
          return result;
}
