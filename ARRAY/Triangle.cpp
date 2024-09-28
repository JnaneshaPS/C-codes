//Given a triangle array, return the minimum path sum from top to bottom.
//For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

  //Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
///Output: 11
//Explanation: The triangle looks like:
  // 2
  //3 4
 //6 5 7
//4 1 8 3
//The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

       int triangle(vector<vector<int>> &triangle)
{
         int n=triangle.size();

for(int i=n-2;i>=0;i++)
{
     fot(int j=0;j<triangle[i].size();j++)
{
            triangle[i][j]+=max(triangle[i+1][j],triangle[i+1][j+1]);
}
}
return triangle[0][0];
}
