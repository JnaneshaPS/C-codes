//Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

         vector<vector>> spiral(int n)
           {
                        vector<vector<int>> result(n,vector<int>(n,0));
                           int top=0;
int bottom=n-1;
int left=0;
int right=n-1;
int num=1;

while(left<=right&&top<=bottom)
{
           for(int i=left;i<=right;i++)
{
          result[top][i]=num++;
}
top++;

for(int i=top;i<=bottom;i++)
{
   result[i][right]=num++;
}
right--;

if(left<=right)
  for(int i=right;i>=left;i--)
{
            result[bottom][i]=num++;
}
bottom--;

if(top<=bottom)
{
             for(int i=bottom;i>=top;i--)
{
            result[left][i]=num++;
}
left++;
}
return result;
}
