//Given an m x n matrix board where each cell is a battleship 'X' or empty '.', return the number of the battleships on board.
//Battleships can only be placed horizontally or vertically on board. In other words, they can only be made of the shape 1 x k (1 row, k columns) or k x 1 (k rows, 1 column),
//where k can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).

//Input: board = [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]
//Output: 2

int battleField(vector<vector<char>> &block)
{
   int m=block.size();
  int n=block[0].size();

    int shipCount=0;

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
{
    if(block[i][j]=='X')
{
if(i==0||block[i-1][j]==',')
{
   if(j==0||block[i][j-1]==',')
{
   shipCount++;
}
}
}
return shipCount;
}
