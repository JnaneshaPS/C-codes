//You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
//Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
//The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, 
//width and height don't exceed 100. Determine the perimeter of the island.

 //Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
//Output: 16
//Explanation: The perimeter is the 16 yellow stripes in the image above.

   int islandPer(vector<vector<int>> &grid)
{
  int m=grid.size();
   int n=grid[0].size();

int perimter=0;

for(int i=0;i<m;i++)
{
   for(int j=0;j<n;j++)
{
    if(grid[i][j]==1)
      perimter+=4;
if(i>0&&grid[i-1][j]==1) perimter-=1;
if(i<m&&grid[i+1][j]==1) perimter-=1;
if(j>0&&grid[i][j-1]==1) perimter-=1;
if(j<n&&grid[i][j+1]==1) perimter-=1;
}
}

return perimter;
}

