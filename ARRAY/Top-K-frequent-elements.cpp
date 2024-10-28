//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

//Input: nums = [1,1,1,2,2,3], k = 2
//Output: [1,2]


vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty())
        {
            return {0};
        }
          
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }
        
        auto cmp = [](pair<int, int>& a,pair<int, int>& b) {
            return a.first > b.first;  
        };
                    priority_queue<pair<int, int>,vector<pair<int, int>>, decltype(cmp)> minHeap(cmp);
for (const auto& [num, freq] : frequencyMap) {
            minHeap.push({freq, num});
            if (minHeap.size() > k) {
                minHeap.pop();  
            }
        }
         vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return result;
    }
