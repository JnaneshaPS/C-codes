//You are given an integer array nums of size n.
//Consider a non-empty subarray from nums that has the maximum possible bitwise AND.
//In other words, let k be the maximum value of the bitwise AND of any subarray of nums. Then, only subarrays with a bitwise AND equal to k should be considered.
//Return the length of the longest such subarray.
//The bitwise AND of an array is the bitwise AND of all the numbers in it.
//A subarray is a contiguous sequence of elements within an array.

int longestSub(vector<int> &nums)
{

int maxNum=*max_element(nums.begin(),nums.end());
int maxlength=0;
int currentlength=0;

for(int nums:nums)
{
       if(num==maxNum)
{
            currentlength++;
}
else{
currentlenth=0;
}
  maxlength=max(maxlength,currentlength);
}
return maxlength;
}
