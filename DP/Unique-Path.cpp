//You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
//The robot can only move either down or right at any point in time.
//An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.
//Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

int unique(vector<vector<int>> &obstacles)
{
          int m=obstacles.size();
          int n=obstacles[0].size();

vector<vector<int>> dp(m,vector<int>(n,0);

if(dp[0][0]==0||dp[m-1][[n-1])
{
return 0;
}
dp[0][0]=1;

//first row trnsverse
for(int i=1;i<n;i++)
{
         dp[0][i]=(obstacle[0][i]==1)?0:dp[0][i-1];
}

//first colummn fill
for(int i=1;i<m;i++)
{
                 dp[i][0]=(obstacle[i][0]==1)?0:dp[i-1][0]);
}

for(int i=1;i<m;i++)
{
for(int j=1;j<n;j++)
{
           if(obstacles[i][j]==1)
{
        dp[i][j]=0;
}
else
{
dp[i][j]=dp[i-1][j]+dp[i][j-1];
}
}
}
return dp[m-1][n-1];
}
