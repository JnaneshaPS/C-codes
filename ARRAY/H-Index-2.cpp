//Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in ascending order, return the researcher's h-index.
//According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that
//have each been cited at least h times.
//You must write an algorithm that runs in logarithmic time.
//Input: citations = [0,1,3,5,6]
//Output: 3
//Explanation: [0,1,3,5,6] means the researcher has 5 papers in total and each of them had received 0, 1, 3, 5, 6 citations respectively.
//Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.

 int hIndex(vector<int> &citations)
{
  int n=nums.size();

 if(citations.empty())
     return 0;

int ans=0;
int s=0;
int e=n-1;

while(s<=e)
{
   int mid=s+(e-s)/2;
  int h=n-mid;

if(citations[mid]>=h)
{
  ans=h;
 e=mid-1;
}
else
{
  s=mid+1;
}
}
return ans;
}
