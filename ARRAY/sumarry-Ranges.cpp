//You are given a sorted unique integer array nums.
//A range [a,b] is the set of all integers from a to b (inclusive).
//Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, 
//and there is no integer x such that x is in one of the ranges but not in nums.
//Each range [a,b] in the list should be output as:
//"a->b" if a != b
//"a" if a == b

//Input: nums = [0,1,2,4,5,7]
//Output: ["0->2","4->5","7"]
//Explanation: The ranges are:
//[0,2] --> "0->2"
//[4,5] --> "4->5"
//[7,7] --> "7"

    vector<string> Summary(vector<int> &nums)
{
  vector<string> ans;
   if(nums.empty())
     return ans;

  int start=nums[0];

  for(int i=1;i<nums.size();i++)
{ 
      if(nums[i]!=nums[i-1]+1)
{
       if(nums[i-1]==start)
{
          ans.push_back(start);
}
else
{
        ans.push_back(to_string(start)+"->"+to_string(nums[i-1]);
}
start=nums[i];
}
}

if(start==nums.back())
{
    ans.push_back(to_string(start));
}
else
{
   ans.push_back(to_string(start)+"->"+to_string(nums.back());
}
return ans;
}
