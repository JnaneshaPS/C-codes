//Given an integer n, return all the numbers in the range [1, n] sorted in lexicographical order.
//You must write an algorithm that runs in O(n) time and uses O(1) extra space. 
//Input: n = 13
//Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]
//Example 2:
//Input: n = 2
//Output: [1,2]

vector<int> lexographical(int n)
{
   int current=1;

 for(int i=1;i<=n;i++)
{
          ans.push_back(current);
        if(current*10<=10)
{
             current*=10;
}
else
{
          while(current%10==9||current+1>n)
{
              current/=10;
}
current++
  }
}
return ans;
}

           
 
