//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:
//After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).
//Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

//Input: prices = [1,2,3,0,2]
//Output: 3
//Explanation: transactions = [buy, sell, cooldown, buy, sell]

int naxProfit(vector<int> &prices)
{
    if(preices..empty())
      return 0;

int n=prices.size();

vector<int> hold(n,0),sold(n,0),rest(n,0);

hold[0]=-prices[0];
sold[0]=0;
rest[0]=0;

for(int i=1;i<n;i++)
{
 hold[i]=max(hold[i-1],sold[i-1]-prices[i]);
sold[i]=hold[i-1]+prices[i];
rest[i]=max(rest[i-1],sold[i-1]);
}
return max(rest[n-1],sold[n-1]);
}
