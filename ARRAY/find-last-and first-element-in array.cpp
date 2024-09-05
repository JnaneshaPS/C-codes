//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

//You must write an algorithm with O(log n) runtime complexity.

vector<int> bounded(vector<int> &nums,int target)
{
  int n=nums.size();

if(n==0)
  return {-1,-1}

auto first=lower_bound(nums.begin(),nums.end(),target);

if(first==nums.end()||*first!=target)
  return {-1,-1};

auto second=upper_bound(nums.begin(),nums.end(),target);

int f=first-nums.begin();
int l=second-nums.begin()-1;

return {f,l};
}
