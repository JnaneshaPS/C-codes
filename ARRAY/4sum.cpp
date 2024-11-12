//Given four integer arrays nums1, nums2, nums3, and nums4 all of length n, return the number of tuples (i, j, k, l) such that:
//0 <= i, j, k, l < n
//nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0

//Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
//Output: 2
//Explanation:
//The two tuples are:
//1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
//2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0

int 4sum(vector<int> &nums1,vector<int> &nums2,vector<int> &nums3,vector<int> &nums4)
  { 

      int count=0;
     unordered_map<int,int> siteMap;
for(int num1:nums1)
{
  for(int num2:nums2)
{
  siteMap[num1+num2]++;
}
}

for(int num3:nums3)
{
  for(int num4:num4)
{
    int target=-(nums1+nums2);
  if(siteMap.find(target)!=siteMap.end())
{
   count+=siteMap[target]
     }
}
}
return count;
}
