//You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
//Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
//You may assume that you have an infinite number of each kind of coin.
//Input: coins = [1,2,5], amount = 11
//Output: 3
//Explanation: 11 = 5 + 5 + 1

  int coinChange(vector<int> &coins,int nums)
{
    vector<int> dp(amount+1,amount+1)

dp[0]=0;

for(int i=0;i<=amount;i++)
{
   for(int coin:coins)
{
   if(i>=coin)
{
  dp[i]=min(dp[i],dp[i-coin]+1);
}
}
}
return dp[amount]>amount?-1:dp[amount];
}
