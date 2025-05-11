//Given an array of positive integers arr. Find the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence. 


  int maxSumIS(vector<int>& arr) {
        // Your code goes here
        
        int n=arr.size();
        
        vector<int> dp(arr);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j])
                dp[i]=max(dp[i],dp[j]+arr[i]);
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
