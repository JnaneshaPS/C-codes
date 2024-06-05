void heapify(vector<int> &arr,int i,int n)
{
   int largest=i;
  int left=2*i+1;
int right=2*i+2;
   if(left<n&&arr[largest]>arr[left])
{
   largest=left;
}
else if(right<n&&arr[largest]>arr[right])
{
largest=right;
}
if(largest!=i)
{
      swap(largest,i);
heapify(arr,i,n);
}

vector<int> merge(vector<int> &arr1,vector<int> &arr2,int n,int m)
{
    vector<int> ans;
   for(auto i:arr1)
         ans.push_back(i);
   for(auto i:arr2)
        ans.push_back(i);

 //build heap by merged arr
  int size = ans.size();
     for(int i=n/2;i>0;i--)
{
       heapify(ans,i,size);
}
return ans;
