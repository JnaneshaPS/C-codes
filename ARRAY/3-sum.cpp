//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.

vector<vector<int>> sum(vector<int> &nums)
{
     int n=nums.size();
       vector<vector<int>> ans;
sort(nums.begin(),nums.end());

if(n<3)
   return ans;

for(int i=0;i<=n-2;i++)
{
    if(i>0&&nums[i-1]==nums[i])
        continue;
int left=i+1;
int right=n-1;

while(left<right)
{
   int sum=nums[i]+nums[left]+nums[right];

if(sum==0)
{
    ans.push_back({nums[i],nums[left],nums[right]});
while(left<right&&nums[left]==nums[right])
  left++;
while(left<right&&nums[left]==nums[right])
  right--;
left++;
right--;
}
else if(sum<0)
{
left++;
}
else{
right--;
}
}
}
return ans;
}
