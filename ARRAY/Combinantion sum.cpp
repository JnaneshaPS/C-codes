//Given an array of distinct integers candidates and a target integer target, return a list of all unique 
//combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
//The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
//frequency
// of at least one of the chosen numbers is different.
//The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input

class Solution{

         void backtrakc(vector<int> &combination,int target,vector<vector<int>> &reasult,vector<int> &input,int start)
{
          //base case
           if(target==0){
             reasult.push_back(combination);
              return ;
           }

      for(int i=0;i<combination.size();i++)
        {
          //check if the element is not greater than target element than remove that element
          if(comination[i]>target)
          {
            break;
          }
          input.push_back(combination[i]);
          backtrack(combination.target-combination[i],reasult,input,i);
                    
          combination.pop_back();
            }
}
vector<vector<int>> Combination(vector<int> &candidates,int target)
{
    vector<vector<int>> reasult;
  vector<int> combination;
  sort(candidates.begin(),candidates.end());
  backtrack(candidates,target,reasult,combination.0);
  return reasult;
};
