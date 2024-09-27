//Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
//In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

//Input: rowIndex = 3
//Output: [1,3,3,1]

            vector<int> getRow(int RowIndex)
{
                vector<int> row(rowIndex+1,1);

                      for(int i=1;i<rowIndex;i++)
{
              for(int j=i;j>0;j--)
{
      row[j]=row[j]+row[j-1];
}
}
return row;
}

