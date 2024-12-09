//Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
//The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. 
//If it doesn't exist, return -1 for this number.
//Input: nums = [1,2,1]
//Output: [2,-1,2]
//Explanation: The first 1's next greater number is 2; 
//The number 2 can't find next greater number. 
//The second 1's next greater number needs to search circularly, which is also 2.

vector<int> nextGreat2(vector<int> &nums)
{
   int n=nums.size();
  vector<int> ans(n,-1);
   stack<int> st;

for(int i=0;i<2*n;i++)
{
   int currentIndex=i%n;
while(!st.empty()&&nums[currentIndex]>nums[st.top()])
{
   ans[st.top()]=nums[currentIndex];
  st.pop();
}

if(i<n)
{
 st.push(currentIndex);
}
}
return ans;
}
