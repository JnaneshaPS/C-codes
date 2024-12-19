//Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
//A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
//0 <= i, j < nums.length
//i != j
//|nums[i] - nums[j]| == k
//Notice that |val| denotes the absolute value of val.
//Input: nums = [3,1,4,1,5], k = 2
//Output: 2
//Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
//Although we have two 1s in the input, we should only return the number of unique pairs.

int Kdiff(vector<int> &nums,int k)
{
   int count=0;

unordered_map<int,int> freq;

for(int num:nums)
{
   freq[num]++;
}

for(auto&[num,freqCount]:freq){
if(k==0){
{
   if(freqCount>1){
count++;
   }
}
else{
  if(freq.find(num+k)!=freq.end()){
    count++;
  }
}
}
return count;
}
