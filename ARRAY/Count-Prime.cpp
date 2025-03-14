//Given an integer n, return the number of prime numbers that are strictly less than n.
//Input: n = 10
//Output: 4
//Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

    int countPrime(int n)
{
int count=0;
    if(n<=2)
      return 0;

vector<bool> isPrime(n,true);

isPrime[0]=[1]=false;

for(int i=2;i*i<n;i++)
{
if(isPrime[i])
{
     for(int j=i*i;j<n;j+=i)
{
  isPrime[j]=false;
}
}
}

for(int i=2;i<n;i++)
{
   if(isPrime[i])
{
  count++;
}
}
return count;
}


