//Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.
//Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
//Output: 4
//Input: matrix = [["0","1"],["1","0"]]
//Output: 1


    int maxiMal(vector<vector<char>> &matrix)
{
  if(matrix.empty())
    return 0;

int n=matrix.size();
int m=matrix[0].size();
int maxSize=0;

vector<vector<int>> dp(n,vector<int>(m,0);

for(int i=0;i<n;i++)
{ 
   for(int j=0;j<m;j++)
{
    if(matrix[i][j]=='1')
{
    if(i==0||j==0)
{
   dp[i][j]=1;
}
else{
   dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
}
maxSize=max(maxSize,dp[i][j]);
}
}
}
return maxSize*maxSize;
}
