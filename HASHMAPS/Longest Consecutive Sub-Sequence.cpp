//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//You must write an algorithm that runs in O(n) time.
//Input: nums = [100,4,200,1,3,2]
//Output: 4
//Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.


int LongConsecutivr(vector<int> &nums)
{
   unordered_set<int> numSet(nums.begin(),nums.wnd());
   int longest=0;

for(int num:numSet)
{
    if(numSet.count(num-1)){
    int currentNum=num;
  int currentStreak=1;

while(numSet.count(currentNum+1)){
  currentNum+=1;
  currentStreak+=1;
}
longest=max(longest,currentStreak);
    }
}

return longest;
}
