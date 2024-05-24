 int kPalindrome(string str, int n, int k)
    {
        // code here

    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Fill the DP table
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
            }
        }
    }

    // The result is in dp[0][n-1]
    return dp[0][n - 1] <= k;
    }
