//You are given an m x n matrix board containing letters 'X' and 'O', capture regions that are surrounded:
//Connect: A cell is connected to adjacent cells horizontally or vertically.
//Region: To form a region connect every 'O' cell.
//Surround: The region is surrounded with 'X' cells if you can connect the region with 'X' cells and none of the region cells are on the edge of the board.
//A surrounded region is captured by replacing all 'O's with 'X's in the input matrix board.


     void dfs(vector<vector<char>> &nums,int i,int j)
{
     int m=nums.size();
     int n=nums[0].size();
if(i<0||j<0||j>=n||i>=m||nums[i][j]!='O')
  return;

dfs[i][j]='#';

   dfs(nums,i+1,j);  //down
  dfs(nums,i-1,j);  //up
   dfs(nums,i,j+1)  //right
     dfs(nums,i,j-1);  //left
}

void solve(vector<vector<char>> &nums)
{
   int m=nums.size();
   int n=nums[0].size();


//checking the elements is present in the first row
  for(int i=0;i<m;i++)
{
     if(nums[i][0]=='O')
{
       dfs(nums,i,0);
}
 if(nums[i][m-1]=='O')
{
       dfs(nums,i,n-1);
}
}

for(int j=0;j<n;j++)
{
  if(nums[0][j]=='O')
{
    dfs(nums,0,j);
}
if(nums[m-1][j]=='O')
{
   dfs(nums,m-1,j);
}
}

for(int i=0;i<m;i++)
{
 for(int j=0;j<n;j++)
{
     if(nums[i][j]=='O')
{
   nums[i][j]='X';
}
else if(nums[i][j]=='#')
{
   nums[i][j]='O';
}
}
}
}




 
