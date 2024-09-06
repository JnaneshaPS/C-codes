//Given an array arr[] denoting heights of N towers and a positive integer K.
//For each tower, you must perform exactly one of the following operations exactly once.
//Increase the height of the tower by K
//Decrease the height of the tower by K
//Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
//You can find a slight modification of the problem here.
//Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

int minimum(vector<int> &arr,int k)
{
    int n=arr.size();
sort(arr.begin(),arr.end());
   if(n==1)
     return 1;
int ans=arr[n-1]-arr[0];

int largest,smallest;

for(int i=0;i<n;i++)
{
    smallest=min(arr[i]+k,arr[i+1]-k);
 largest=max(arr[n-1]+k,arr[i}+k);
  ans=min(ans,min(largest-smallest);
}
return ans;
}
