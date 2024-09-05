//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


void rotatte(vector<int> &nums,int k)
{
     int n=nums.size();
     k=k%n;

reverse(nums.begin(),nums.end());//roatate the whole array
reverse(nums.begin(),nums.begin()+k);//rotate the first k elemets
reverse(nums.begin()+k,nums.end());//rotate the n-k elements
}
