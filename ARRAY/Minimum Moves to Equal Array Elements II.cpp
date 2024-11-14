//Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.
//In one move, you can increment or decrement an element of the array by 1.
//Test cases are designed so that the answer will fit in a 32-bit integer.
//Input: nums = [1,2,3]
//Output: 2
//Explanation:
//Only two moves are needed (remember each move increments or decrements one element):
//[1,2,3]  =>  [2,2,3]  =>  [2,2,2]

int minMoves(vector<int> &nums)
{
    if(nums.empty())
      return 0;
int count=0;

sort(nums.begin(),nums.end());
    int mid=nums[mid];

for(int num:nums)
{
    count+=(num-mid);
}
return count;
}

 
