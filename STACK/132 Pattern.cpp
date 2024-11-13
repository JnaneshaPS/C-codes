//Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].
//Return true if there is a 132 pattern in nums, otherwise, return false.
//Input: nums = [1,2,3,4]
//Output: false
//Explanation: There is no 132 pattern in the sequence.

  bool 132Pattern(vector<int> &nums)
    {
     int n=nums.size();
if(n<3)
  return fasle;

stack<int> st;
       int third=INT_MAX;
 for(int i=n-1;i>=0;i--)
{
    if(nums[i]<third)
      return true;

while(!st.empty()&&nums[i]>st.top())
{
    third=st.top();
   st.pop();
}
st.push(nums[i]);
}
return false;
  }
