//Given an array arr of size n which contains elements in range from 0 to n-1,
//you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 



class solution{

vector<int> duplicates(vector<int> arr)
{
     vector<int> ans;
   unordered_map<int,int> count;

   for(int i=0;i<n;i++)
{
    count[arr[i]]++;
}

for(auto it:count)
{
    if(it.second>1)
{
   ans.push_back(it.second);
}
}

sort(ans.begin(),ans.end());
  return ans;
return {-1};
}
