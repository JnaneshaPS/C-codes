//this is problem to pick the infanite elemets are given like 1,2,3....etc  we should write the code for getting a fixed sum of elements example:if we need to get sum as 7 then by 1,2,3 then 1 should added 7 times 
//2 should be loke 2+2+2+1 and by 3 is 3+3+1 so last one is taking minimum elemets then it is the answer

int solve(vector<int> &num,int x)
{
  vector<int> dp(x+1,INT_MAX);
dp[0]=0;

for(int i=1;i<=x;i++)
{
//trying to solve from 1 to x
for(int j=0;j<num.size();j++)
{
   if(i-num[j]>=0&&dp[i-num[j]]!=INT_MAX){
dp[i]=min(dp[i],1+dp[i-num[j]);
   }
}
}
if(dp[x]==INT_MAX)
  return -1;
return dp[x];
}

int minimumElement(vector<int> &num,int x)
{
return solve(num,x);
}
