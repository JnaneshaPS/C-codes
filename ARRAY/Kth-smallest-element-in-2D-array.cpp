//Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.
//Note that it is the kth smallest element in the sorted order, not the kth distinct element.
//You must find a solution with a memory complexity better than O(n2).
//Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
//Output: 13
//Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13

   int calucalte(vector<vector<int>> &matrix,int target)
{
  int n=matrix.size();
  int row=n-1,col=0;
  int count=0;

while(row>=0&&col<n)
{
    if(matrix[row][col]<=target)
{
    count+=row+1;
   col++;
}
else
{
   row--;
}
}
return count;
}

int kthLarget(vector<vector<int>> &matrix,int k)
{
    int n=matirx.size();
   int left=0;
  int right=n-1;

while(left<right)
{
  int mid=left+(right-left)/2;
    int count=counter(matrix,k);
if(count<k)
{
    left=mid+1;
}
else
{
right=mid;
}
}
return left;
}
