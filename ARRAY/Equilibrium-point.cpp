//Given an array arr of non-negative numbers. The task is to find the first equilibrium point in an array. The equilibrium point in an array is an index (or position) 
//such that the sum of all elements before that index is the same as the sum of elements after it.
//Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

class solution{
int equilibrium(vector<long long> &arr){
              long long n=arr.size();
               long long totalsum=0;

                     for(long long num:arr)
                       {
                         totalsum+=num;
                       }

                        long long leftsum=0;
  for(int i=0;i<n;i++)
    {
      long long rightsum=totalsum-leftsum-arr[i];
    
  if(rightsum==leftsum){
return i+1;
  }
  leftsum+=arr[i];
}
  return -1;
}
};
