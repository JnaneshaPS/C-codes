//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

void rotate(vector<int> &nums,int k)
{
   int n=nums.size();
   int k=k%n;

reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());
}
