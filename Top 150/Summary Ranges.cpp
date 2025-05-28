//You are given a sorted unique integer array nums.
//A range [a,b] is the set of all integers from a to b (inclusive).
//Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
//Each range [a,b] in the list should be output as:
//"a->b" if a != b
//"a" if a == b
//Input: nums = [0,1,2,4,5,7]
//Output: ["0->2","4->5","7"]
//Explanation: The ranges are:
//[0,2] --> "0->2"
//[4,5] --> "4->5"
//[7,7] --> "7"

vector<string> summary(vector<int> &nums)
{
      int n=nums.size();

vector<string> result;
 if(n==0) return result;

int start=nums[0];

for(int i=1;i<=n;i++)
{
  if(start==nums[i-1]){
       result.push_back(to_string(start));
  }else{
      result.push_back(to_string(start)+"->"+to_string(nums[i-1]));
  }

if(i<n) start=nums[i-1];
}

return result;
}
