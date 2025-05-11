//There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1
//stair or 2 stairs at a time. Your task is to count the number of ways, the person can reach the top (order does matter).

    int countWays(int n) {
        if(n==0||n==1)
            return 1;
        
        vector<int> dp(n+1);
        
        dp[0]=dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
            }
};
