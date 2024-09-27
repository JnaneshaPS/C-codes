//Given an integer numRows, return the first numRows of Pascal's triangle.
//In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

//Input: numRows = 5
//Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
//Input: numRows = 1
//Output: [[1]]

            class so;ution
            {
              vector<vector<int>> generate(int numRows)
              {
                       vector<vector<int>> ans;
                    for(int i=0;i<numRows;i++)
              {
                            vector<int> rows(i+1,1);
                         for(int j=1;j<i;i++)
                { 
                    row[j]=ans[i-1][j-1]+ans[i-1][j];
                 }
               ans.push_back(row);
              }
}
};
