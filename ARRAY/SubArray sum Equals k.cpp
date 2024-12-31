//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//A subarray is a contiguous non-empty sequence of elements within an array.
//Input: nums = [1,1,1], k = 2
//Output: 2
//Input: nums = [1,2,3], k = 3
//Output: 2

int subArraySum(vector<int> &nums,int k)
{
   unordered_map<int,int> prefixCount;
  prefixCount[0]=1;

int prefixSum=0;
int count=0;

for(int num:nums)
{
    prefixSum+=num;

if(prefixCount.find(prefixSum-k)!=prefixCount.end()){
count+=prefixCount[prefixSum-k];
}

prefixCount[prefixSum]++;
}
return count;
}
