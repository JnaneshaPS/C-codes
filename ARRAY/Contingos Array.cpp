//Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
//Input: nums = [0,1]
//Output: 2
//Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

int contiArray(vector<int> &nums)
{
    unordered_map<int,int> hashMap;
  hashMap[0]=-1;

int prefixSum=0;
int maxLength=0;

for(int i=0;i<nums.size();i++)
{
  prefixSum+=(nums[i]==0)?-1:1;

 if(hashMap.find(prefixSum)!=hashMap.end())
{
     maxLength=max(maxLength,i-hashMap[prefixSum]);
}else{
    hashMap[prefixSum]=i;
}
}
return maxLength;
}
