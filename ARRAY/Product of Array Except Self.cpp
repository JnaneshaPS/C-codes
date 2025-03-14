//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//You must write an algorithm that runs in O(n) time and without using the division operation.

    //Input: nums = [1,2,3,4]
//Output: [24,12,8,6]


   vector<int> Product(vector<int> &nums)
{
    int n=nums.size();

 if(nums.empty())
   return {0};

vector<int> ans(n,1);

int leftProduct=1;

for(int i=0;i<n;i++)
{
    ans[i]=leftProduct;
    leftProduct*=nums[i];
}

int rightProduct=1;
for(int i=n-1;i>=0;i--)
{
   ans[i]*=rightProduct;
   rightProduct*=nums[i];
}
return ans;
}
   
