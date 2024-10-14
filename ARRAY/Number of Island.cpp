//Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
//An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

//Input: grid = [
  //["1","1","1","1","0"],
  //["1","1","0","1","0"],
  //["1","1","0","0","0"],
  //["0","0","0","0","0"]
//]
//Output: 1
Input: grid = [
  //["1","1","0","0","0"],
  //["1","1","0","0","0"],
  //["0","0","1","0","0"],
  //["0","0","0","1","1"]
//]

             void dfs(vector<vector<char>> &grid,int i,int j)
  {
     if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]=='0')
  {
   return ;
  }

  grid[i][j]='0';

  dfs(grid,i+1,j);
  dfs(grid,i-1,j);
  dfs(grid,i,j+1);
 dfs(grid,i,j-1);
}

 int NoIsland(vector<vector<char>> &grid)
  {
      if(nums.empty())
         return 0;

   int island_count=0;

for(int i=0;i<grid.size();i++){
   for(int j=0;j<grid[0].size())
{
   if(grid[i][j]=='1')
     island_count++;
   dfs(grid,i,j);
}
}
return island_count;
             }
  


