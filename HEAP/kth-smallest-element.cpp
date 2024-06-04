class Solution
//arr :given array
//l : first index of the array
//r : size-1 index of the given array
//k:smallest element to find in the array
{
public:
       int kthsmallest(int arr[],int l,int r,int k)
{
  priority_queue<int> pq;

  for(int i=0;i<k;i++)
{
  pq.push(arr[i]);
}
for(int i=k;i<=r;i++)
{
if(arr[i]<pq.top())
{
  pq.pop();
pq.push(arr[i]);
}
}
int ans=pq.top();
return ans;
