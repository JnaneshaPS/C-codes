//Given a positive integer n. You have to find nth natural number after removing all the numbers containing the digit 9.

long long findNth(long long n)
{
    long long reasult=0;
long long place=1;

while(n>0)
{
reasult=reasult+(n%9)*place;
n=n/9;
place=place*10;
}
return reasult;
}
