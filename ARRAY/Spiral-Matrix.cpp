//Given an m x n matrix, return all elements of the matrix in spiral order.

 vector<int> spiral(vector<vector<int>> &matrix)
{
           int top=0;   //top row
            int bottom=matrix.size()-1;   //last row
           int left=0;   //first column
             int right=matrix[0].size()-1;      //last column
vector<int> result;

           while(top<=bottom&&left<=right)
{
             for(int i=left;i<=right;i++)
{
                result.push_back(matrix[top][i]);
}
top++;
                     for(int i=top;i<=bottom;i++)
{
                              result.push_back(matrix[i][right]);
}
right--;
if(left<=right)
{
             for(int i=right;i>=left;i--)
{            
result.push_back(matrix[bottom][i]);
}
bottom--;
if(top<=bottm)
{
              for(int i=bottom;i>=top;i--)
{
            result.push_back(matrix[i][left]);
}
left++;
}
return result;
                    
