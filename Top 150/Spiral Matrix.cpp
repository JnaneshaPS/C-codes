//Given an m x n matrix, return all elements of the matrix in spiral order.


vector<int> spiral(vector<vector<int>> &matrix)
{
  vector<int> result;

   int left=0,right=matrix[0].size();
   int top=0,bottom=matrix.size();

while(left<=right&&top<=bottom)
{

for(int i=left;i<=right;i++)
   result.push_back(matrix[top][i]);
    top++;

for(int i=top;i<=bottom;i++)
  result..push_back(matrix[i][right]);
  right--;

if(top<=bottom)
{
   for(int i=bottom;i>=top;i--)
result.push_back(matrix[i][left]);
left++;
}
if(left<=right)
{
  for(int i=right;i>=left;i--)
  result.push_back(matrix[bottom][i]);
bottom--;
}
}

return result;
}
