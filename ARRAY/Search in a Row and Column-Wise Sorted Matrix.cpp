
bool serach(vector<vector<int>> &matrix,int target)
{

int row=matrix.size();
int cols=matrix[0].size();

int i=0,j=cols-1;

while(i<row&&j>0)
{
  if(matrix[i][j]==target){
   return true;
  }else if(matrix[i][j]>target)
{
j--;
}else{
i++;
}
}
return false;
}
