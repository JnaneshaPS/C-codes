void addSolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n)
{
vector<int> temp;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
{
     if (board[i][j] == 1) {
                temp.push_back(j + 1);
                break;
}
  }
ans.push_back(temp);
}

bool isSafe(int col,int row,vector<vector<int>> &board,int n)
{
  int x,y;
  // Check left side in the same row
    for (y = col; y >= 0; y--) {
        if (board[row][y] == 1) {
            return false;
        }
    }

    // Check upper left diagonal
    for (x = row, y = col; x >= 0 && y >= 0; x--, y--) {
        if (board[x][y] == 1) {
            return false;
        }
    }

    // Check lower left diagonal
    for (x = row, y = col; x < n && y >= 0; x++, y--) {
        if (board[x][y] == 1) {
            return false;
        }
    }

    return true;

}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &ans,int n)
{
      if(col==n){
        addSolution(ans,board,n)
          return;
      }

    for(int row=0;row<n;row++)
{
   if(isSafe(row,col,board,n)
{
   board[row][col]=1;
   solve(col+1,ans,board,n);
   board[row][col]=0;
}
}
}


vector<vector<int>> NQueen(int n)
{
  vector<vector<int>> ans;
vector<vector<int>> board(n,vector<int> (n,0));

solve(0,ans,board,n);
return ans;
}
