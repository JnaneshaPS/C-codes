//Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if
//it is greater than all the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

vector<int> Leader(int n,vector<int> arr)
{
    vector<int> ans;
     int max=n-1;
     ans.push_back(arr[max]);
       for(int i=n-2;i>=0;i++)
{
       if(arr[i]>=max)
{
     ans.push_back(arr[i]);
}
}
reverse(ans.begin(),ans.end());

return ans;
}
