//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//You must write an algorithm that runs in O(n) time and without using the division operation.

int product(vector<int> &nums)
{
  int n=nums.size();
  vector<int> result(n,1);

int left=1;
for(int i=0;i<n;i++)
{
    result[i]=left;
   left*=nums[i];
}

int right=1;
for(int i=n-1;i>=0;i--)
{
    result[i]*=right;
right*=right;
}

return result;
}
