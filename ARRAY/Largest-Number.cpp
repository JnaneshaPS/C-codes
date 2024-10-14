//Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
//Since the result may be very large, so you need to return a string instead of an integer.
//Input: nums = [10,2]
//Output: "210"
//Input: nums = [3,30,34,5,9]
//Output: "9534330"

                     string largest(vector<int> &nums)
{
     vector<string> strNums;

for(int &num:nums)
{
    strNums.push_back(to_string(num));
}

sort(strNums.begin(),strNums.end(),[](string &a,string &b)
{
    return a+b>b+a;
});

if(strNums[0]=="0")
{
   return "0";
}
string result;
for(string &str:strNums)
{
result+=str;
}
return result;
}
  
