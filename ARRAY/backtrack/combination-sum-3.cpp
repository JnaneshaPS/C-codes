//Find all valid combinations of k numbers that sum up to n such that the following conditions are true:
//Only numbers 1 through 9 are used.
//Each number is used at most once.
//Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.
//  Input: k = 3, n = 7
//Output: [[1,2,4]]
//Explanation:
//1 + 2 + 4 = 7
//There are no other valid combinations.
//Input: k = 3, n = 9
//Output: [[1,2,6],[1,3,5],[2,3,4]]
//Explanation:
//1 + 2 + 6 = 9
//1 + 3 + 5 = 9
//2 + 3 + 4 = 9
//There are no other valid combinations.
//Input: k = 4, n = 1
//Output: []
//Explanation: There are no valid combinations.
//Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.

        class Solution{

     void backtrack(int k,int n,vector<int> &combination,vector<vector<int>> &result,int start)
{
  if(combination.size()==k&&n==0)
{
  result.push_back(combination);
}

for(int i=start;i<10;i++)
{
   if(i>n)
{
  break;
}
combination.push_back(i);
backtrack(k,n-i,combination,result,i+1);
combination.pop_back();
}
}

vector<vector<int>> combination3(int n,int k)
{
   vector<int> combination;
   vector<vector<int>> result;
backtrack(k,n,combination,result,1);
  return result;
}
};
