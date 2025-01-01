//You are given an integer array nums. The adjacent integers in nums will perform the float division.
//For example, for nums = [2,3,4], we will evaluate the expression "2/3/4".
//However, you can add any number of parenthesis at any position to change the priority of operations. You want to add these parentheses such the value of the expression after the evaluation is maximum.
//Return the corresponding expression that has the maximum value in string format.
//Note: your expression should not contain redundant parenthesis.
//Input: nums = [1000,100,10,2]
//Output: "1000/(100/10/2)"
//Explanation: 1000/(100/10/2) = 1000/((100/10)/2) = 200
//However, the bold parenthesis in "1000/((100/10)/2)" are redundant since they do not influence the operation priority.
//So you should return "1000/(100/10/2)".
//Other cases:
//1000/(100/10)/2 = 50
//1000/(100/(10/2)) = 50
//1000/100/10/2 = 0.5
//1000/100/(10/2) = 2
//Input: nums = [2,3,4]
//Output: "2/(3/4)"
//Explanation: (2/(3/4)) = 8/3 = 2.667
///It can be shown that after trying all possibilities, we cannot get an expression with evaluation greater than 2.667

string OptimalDiv(vector<int> &nums){
  int n=nums.size();

if(n==1)
{
  return to_string(nums[0]);
}

if(n==2)
{
   return to_string(nums[0)+"/"+to_string(nums[1]);
}

ostringstream result;

result<<nums[0]<<"(/";
for(int i=1;i<n;i++)
{
    result<nums[i];
  if(i!=n-1)
{
  result<<"/";
}
}
result<<")";

return result.str();
}