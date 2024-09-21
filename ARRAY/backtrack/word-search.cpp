//Given an m x n grid of characters board and a string word, return true if word exists in the grid.
//The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.
//Example 1:
//Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
//Output: true


bool backtrack(vector<vector<char>> &matrix,string word,int i,int j,int index)
{
     if(index==word.size())
{
         return true;
}

     if(i<0||i>=word.size()||j<0||j>=word.size())
{
    return false;
}

char temp=board[i][j];
board[i][j]='*';

     bool found=backtrack(matrix,word,i+1,j,index+1)||   //down
                backtrack(matrix,word,i,j+1,index+1)||  //left
                backtrack(matrix,word,i-1,j,index+1)||    //up
                backtrack(matrix,word,i,j-1,index+1);   //right

     board[i][j]=temp;

return found;
}

bool wordSearch(vector<vector<char>> &matrix,string word)
{
             int col=matrix[0].size();
           int row=matrix.size();
            if(row==0)
              return false;
for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
{
        if(matrix[i][j]==word[0]&&backtrack(matrix,word,i,j,0);
          return true;
}
}
return false;
}
                
