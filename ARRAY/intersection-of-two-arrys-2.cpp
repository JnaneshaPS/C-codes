//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return 
//the result in any order.
//Input: nums1 = [1,2,2,1], nums2 = [2,2]
//Output: [2,2]

vector<int> intersection(vector<int> &nums1,vector<int> &nums2)
{
   unordered_map<int,int> count;
  vector<int> result;

for(int num:nums1)
{
    count[num]++;
}

for(int num:nums2)
{
  if(count[num]>0)
{
    result.push_back(num);
    count[num]--;
}
}
return result;
}

 
