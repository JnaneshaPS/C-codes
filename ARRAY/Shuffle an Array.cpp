//Given an integer array nums, design an algorithm to randomly shuffle the array. All permutations of the array should be equally likely as a result of the shuffling.
//Implement the Solution class:
//Solution(int[] nums) Initializes the object with the integer array nums.
//int[] reset() Resets the array to its original configuration and returns it.
//int[] shuffle() Returns a random shuffling of the array.
//Input
//["Solution", "shuffle", "reset", "shuffle"]
//[[[1, 2, 3]], [], [], []]
//Output
//[null, [3, 1, 2], [1, 2, 3], [1, 3, 2]]

class Solution
{
 public:
vector<int> nums;
vector<int> original;
        Solution(vector<int> &nums)
{
   this->nums=nums;
   this->original=nums;
}

int reset()
{
   nums=original;
   return nums;
}
void shuffle()
{
    random_device(rd);
    mt19937 gen(rd());

std::shuffle(nums.begin(),nums.end(),gen);
return nums;
}
}


    
