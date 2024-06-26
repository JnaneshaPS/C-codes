  bool isSafe(int row,int col,vector<vector<int>> &board,int val){
        for(int i=0;i<board.size();i++)
        {
            //row check
            if(board[row][i]==val)
              return false;
              
            if(board[i][col]==0)
              return false;
              
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]);
               return false;
        }
        return true;
    }
    
    bool solve(vector<vector<int>> &board)
    {
        int n=board.size();
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(board[i][j]==0)
                {
                    for(int val=0;val<=9;val++)
                    {
                        if(isSafe(i,j,board,val))
                        {
                            board[i][j]=val;
                            //recursive call
                            bool nextpossiblesoln=solve(board);
                            if(nextpossiblesoln)
                               return true;
                            else{
                                board[i][j]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    int isValid(vector<vector<int>> mat){
        // code here
        return solve(mat);
    }
