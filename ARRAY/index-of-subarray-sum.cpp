class solution
//in this we need to conver the answer to 0 inndexing to the 1's indexing
{
//where n is the size of array and s is the summ we need to find 
    vector<int> subArray(vector<int> &arr,int n,long long s)
{
//solve for the case if the sum is 0 i.e s=0
  if(s==0)
  {
   for(int i=0;i<n;i++)
     {
          if(arr[i]==0)
          {
    return {i+1,i+1};
          }
       return {-1};
     }

    int start=0;
    int sum=0;

    for(int i=0;i<n;i++)
      {
          sum=sum+arr[i];

        if(sum>s&&start<i){
          sum=sum-arr[i];
          start++;
        }
        if(sum==s)
        {
            return {start+1,i+1};
        }
      }
    return {-1};

}
