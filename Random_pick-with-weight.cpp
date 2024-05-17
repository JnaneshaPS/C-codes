private:
    std::vector<int> prefixSums;
    int totalSum;

public:
    Solution(std::vector<int>& w) {
        totalSum = std::accumulate(w.begin(), w.end(), 0);
        prefixSums.resize(w.size());
        prefixSums[0] = w[0];
        for (int i = 1; i < w.size(); ++i) {
            prefixSums[i] = prefixSums[i - 1] + w[i];
        }
    }
    
    int pickIndex() {
        int randomNum = rand() % totalSum + 1;
        int left = 0, right = prefixSums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (prefixSums[mid] < randomNum) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
