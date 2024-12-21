//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
//Return the single element that appears only once.
//Your solution must run in O(log n) time and O(1) space.
//Input: nums = [1,1,2,3,3,4,4,8,8]
//Output: 2

int singElement(vector<int> &nums)
{
  int left=0,right=nums.size();

while(left<right)
{
   int mid=left+(rigth-left)/2;
 if(mid%2==1)  mid--;

if(nums[mid]==nums[mid+1])
{
  left=mid+2;
}else{
right=mid;
}
}
return nums[left];
}
