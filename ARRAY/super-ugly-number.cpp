//A super ugly number is a positive integer whose prime factors are in the array primes.
//Given an integer n and an array of integers primes, return the nth super ugly number.
//The nth super ugly number is guaranteed to fit in a 32-bit signed integer.

//Input: n = 12, primes = [2,7,13,19]
//Output: 32
//Explanation: [1,2,4,7,8,13,14,16,19,26,28,32] is the sequence of the first 12 super ugly numbers given primes = [2,7,13,19].

int superUgly(int n,vector<int> &primes)
{
    int k=primes.size();
if(primes.empty())
  return 0;
if(n=1)
  return 1;

vector<int> ugly(n);

ugly[0]=primes[0];

vector<int> next(k);
vector<int> indices(k,0);

for(int i=0;i<n;i++)
{
next[i]=prices[i];
}

for(int i=1;i<n;i++)
{
   int nextUgly=*min_element(next.begin(),next.end());
ugly[i]=nextUgly;
for(int j=0;j<n;j++)
{
   if(next[j]==nextUgly)
{
   indices[j]++;
next[i]=ugly[indices[j]]*primes[j];
}
}
}
return ugly[n-1]
  }
