//Given an integer array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3]....
//You may assume the input array always has a valid answer.
//Input: nums = [1,5,1,1,6,4]
//Output: [1,6,1,5,1,4]
//Explanation: [1,4,1,5,1,6] is also accepted.

void wiggleSort(vector<int> &nums)
{
   vector<int> wiggle=nums;
   sort(wiggle.begin(),wiggle.end());

int n=nums.size();

int mid=(n+1)/2;

int l=mid-1;
int r=n-1;

for(int i=0;i<n;i++)
{
   if(i%2==0)
{
  nums[i]=wiggle[l--];
}
else
{
   nums[i]=wiggle[r--];
}
}
}
