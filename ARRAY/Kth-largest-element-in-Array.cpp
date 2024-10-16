//Given an integer array nums and an integer k, return the kth largest element in the array.
//Note that it is the kth largest element in the sorted order, not the kth distinct element.
//Can you solve it without sorting?

//Input: nums = [3,2,1,5,6,4], k = 2
//Output: 5
//Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
//Output: 4

class Solution{
            int KthLargest(vector<int> &nums,int k)
{
  priority_queue<int,vector<int>,greater<int>> minHeap;

for(int num:nums)
{
   minHeap.push(num);

if(minHeap.size()>k)
{
   minHeap.pop();
}
}
return minHeap.top();
}
};
