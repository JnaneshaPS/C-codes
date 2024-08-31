class solution
{
int maxsubArray(vector<int> &arr)
{
int n=arr.size();
  int max=INT_MIN;
  int sum=0;

  for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];

      if(sum>max)
      {
        max=sum;
      }
      if(sum<0)
      {
     sum=0;
      }
    }
return max;
};
