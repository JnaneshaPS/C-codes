//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//You must write an algorithm that runs in O(n) time.

int longestSequence(vector<int> &nums)
{
    int currentStreak=1;
   int longestStreak=1;

for(int i=1;i<nums.size();i++)
{
         if(nums[i]==nums[i-1])
{
       continue;
}
if(nums[i]==nums[i-1]+1)
{
  currentStreak++;
}
 else
{
       longestStreak=max(longestStrak,currentStreak);
      cureentStreak=1;
}
}
return max(currentStreak,longestStreak);
}
