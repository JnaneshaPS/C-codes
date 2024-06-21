bool isSafe(int x,int y,vector<vector<int>> &ans,vector<vector<bool>> &visited,int n)
    {
        if((x>=0&&x<n)&&(y>=0&&y<n)&&visited[x][y]!=1&&ans[x][y]==1)
        {
            return true;
        }
        else
            return false;
        
    }
    
    void solve(int x,int y,vector<vector<int>> &arr,int n,vector<string>& ans,vector<vector<bool>> &vis,
    string path)
    {
        //base case
        if(x==n-1&&y==n-1)
        {
            ans.push_back(path);
            return;
        }
        
        //4 movements
        //L,D,R,U
        
         vis[x][y]=1;
        //D
        if(isSafe(x+1,y,arr,vis,n)){
            vis[x][y]=1;  solve(x+1,y,arr,n,ans,vis,path+'D');
         
        }
        
        //L
         if(isSafe(x,y-1,arr,vis,n)){
        
            solve(x,y-1,arr,n,ans,vis,path+'L');
        }
        
        //R
         if(isSafe(x,y+1,arr,vis,n)){
            solve(x,y+1,arr,n,ans,vis,path+'R');
           
        }
        
        //U
         if(isSafe(x-1,y,arr,vis,n)){
           
            solve(x-1,y,arr,n,ans,vis,path+'U');
           
        }
         vis[x][y]=0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        string path="";
        
        if(m[0][0]==0)
          {
              return ans;
          }
        
        solve(0,0,m,n,ans,visited,path);
        
        return ans;
        
    }
