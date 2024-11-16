//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//Given an integer array nums, return the sum of Hamming distances between all the pairs of the integers in nums.
//Input: nums = [4,14,2]
//Output: 6
//Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
//showing the four bits relevant in this case).
//The answer will be:
//HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.

int hammingDist(vector<int> &nums)
{
    int totalDist=0;


for(int bit=0;bit<32;bit++)
{
   int count1=0;
  for(int num:nums)
{
  count1+=(num>>bit) &1;
}
int count0=num-count1;

totalDist+=count1*count0;
}
return totalDist;
}
