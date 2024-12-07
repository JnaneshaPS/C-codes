//Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.
//Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [1,2,4,7,5,3,6,8,9]
//Input: mat = [[1,2],[3,4]]
//Output: [1,2,3,4]

  vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
      int m=mat.size();
      int n=mat[0].size();

      for(int k=0;k<m+n-1;k++)
      {
        if(k%2==0)
        {
            int i= min(k,m-1);
            int j=k-i;

            while(i>=0&&j<n)
            {
                ans.push_back(mat[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            int j=min(k,n-1);
            int i=k-j;
            while(j>=0&&i<m)
            {
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        
      }
        return ans;
    }
