//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity

int searchInsert(vector<int> &nums,int target)
{
   int n=nums.size();
   int s=0,e=n-1;

     while(s<e)
{
    int mid=s+(e-s)/2;
    if(arr[mid]==target)
      return mid;
     else if(arr[mid}<target)
       s=mid+1;
else{
e=mid-1;
}
}
return s;
}
