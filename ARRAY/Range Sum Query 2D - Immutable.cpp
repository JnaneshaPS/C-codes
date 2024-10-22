//Given a 2D matrix matrix, handle multiple queries of the following type:
//Calculate the sum of the elements of matrix inside the rectangle defined by its upper left corner (row1, col1) and lower right corner (row2, col2).
//Implement the NumMatrix class:
//NumMatrix(int[][] matrix) Initializes the object with the integer matrix matrix.
//int sumRegion(int row1, int col1, int row2, int col2) Returns the sum of the elements of matrix inside the rectangle defined by its upper left corner (row1, col1) 
//and lower right corner (row2, col2).
//You must design an algorithm where sumRegion works on O(1) time complexity.

class Solution
{
public:
    vector<vector<int>> prefixSum;
NumMatrix(vector<vector<int>> *matrix)
{
  int rows=matrix.size();
  int cols=matrix[0].size();

  vector<vector<int>> prefixSum;

  for(int i=1;i<=rows;i++)
    {
     for(int j=1;j<=cols;j++)
       {
         prefixSum[i][j]=matrix[i-1][j-1]+prefixSum[i-1][j]+prefixSum[i][j-1]-prefixSum[i-1][j-1];
       }
    }
}

int sumRange(int row1,int col1,int row2,int col2)
{
    row1++;col1++;row2++;col2++;

  return prefixSum[row2][col2]-prefixSum[row1-1][col2]-prefixSum[row2][col1-1]+prefixSum[row1-1][col1-1];
}
};

 
