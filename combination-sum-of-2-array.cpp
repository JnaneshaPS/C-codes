void backtrack(vector<int>& arr, int target, int start, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        // Skip duplicates
        if (i > start && arr[i] == arr[i - 1])
            continue;

        // Check if the current element can be included in the combination
        if (arr[i] <= target) {
            current.push_back(arr[i]);
            // Explore further combinations with the remaining elements
            backtrack(arr, target - arr[i], i + 1, current, result);
            // Backtrack
            current.pop_back();
        }
    }
}
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(), arr.end()); // Sort the array to handle duplicates
    vector<vector<int>> result;
    vector<int> current;
    backtrack(arr, k, 0, current, result);
    return result;
        
    }
