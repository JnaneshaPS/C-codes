//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

void Setmatrix0(vector<vector<int>> &matrix)
{
    int m=matrix.size();
    int n=matrix[0].size();
      bool firstRow=false;
      bool firstCol=false;

     for(int i=0;i<n;i++)
{ 
        if(matrix[0][i]==0)
{
           firstRow=true;
          break;
}
}

for(int i=0;i<n;i++)
{
           if(matrix[i][0]==0)
{
            firstCol=true;
  break;
}

}

    for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
                {
                    if(matrix[i][j]==0)
                    {
                         matrix[i][0]=0;
                        matrix[0][j]=0;
                    }
                }
        }

    

for(int i=1;i<m;i++)
{
     if(matrix[i][0]=0)
     {
       for(int j=1;j<n;j++)
{
     matrix[i][j]=0;
}
     }
}


for(int i=1;i<n;i++)
{  
    if(matrix[0][i]=0)
    {
        for(int j=1;j<m;j++)
{     
         matrix[i][j]=0;
}
    }
}

if(firstRow)
{
  for(int i=0;i<n;i++)
{   
          matrix[0][i]=0;
}
}

if(firstCol)
{
        for(int i=0;i<m;i++)
{
          matrix[i][0]=0;
}
}
}