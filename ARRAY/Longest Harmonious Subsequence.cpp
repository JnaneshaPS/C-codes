//We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
//Given an integer array nums, return the length of its longest harmonious 
//subsequence among all its possible subsequences.
//Input: nums = [1,3,2,2,5,2,3,7]
//Output: 5
//Explanation:
//The longest harmonious subsequence is [3,2,2,2,3].

int findLHS(vector<int> &nums)
{
   
        unordered_map<int,int> maps;
        int maxLength=0;

        for(int &num:nums){
            maps[num]++;
        }

        for(const auto &map:maps){
            int key=map.first;
            if(maps.find(key+1)!=maps.end()){
                maxLength=max(maxLength,maps[key]+maps[key+1]);
            }
        }

return maxLength;
}
}
