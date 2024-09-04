 int print2largest(vector<int> &arr) {
        // Code Here
        vector<int> ans;
        int n=arr.size();
        int maxcount=0;
        
        
        sort(arr.begin(),arr.end());
        int max=arr[n-1];
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=max)
            {
                ans.push_back(arr[i]);
            }
            if(arr[i]==max)
            {
                maxcount++;
            }
        }
        if(maxcount==arr.size())
        {
            return -1;
        }
        
        sort(ans.begin(),ans.end());
        
        int m=ans.size();

        return ans[m-1];
    }
