//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.

void setMatrixZero(vector<vector<int>> &matrix)
{
    int row=matrix.size();
   int col=matrix[0].size();

bool firstRow=false,firstCol=false;


for(int i=0;i<row;i++)
{
  if(matrix[i][0]==0) firstRow=false;
}

for(int j=0;j<col;j++)
{
   if(matrix[[0][j]==0) firstCol=false;
}

for(int i=1;i<row;i++)
{
 for(int j=1;j<col;j++)
{
    if(matrix[i][j]==0){
    matrix[i][0]=0;
   matrix[0][j]=0;
    }

}

  for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

if(firstCol){
for(int i=0;i<row;i++) matrix[i][0]=0;
}
if(firstRow){
   for(int j=0;j<col;j++)  matrix[0][j]=0;
}
}
