//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


   int majorityElement(vector<int> &nums)
{
     int n=nums.size();
    unordered_map<int,int> freq;
    int ans=0;

for(int &num:nums)
{
    freq[num]++;
}

   for(auto fre:freq)
{
     if(ans<fre.second)
{
    ans=fre.first;
}
}
return ans;
}
