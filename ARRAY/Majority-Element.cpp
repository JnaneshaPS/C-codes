//Given an array arr. Find the majority element in the array. If no majority exists, return -1.

//A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

int majority(vector<int> &arr)
{

int n=arr.size();
unordered_map<int,int> count;

for(int i=0;i<n;i++)
{
    count[arr[i]]++;

if(count[arr[i]]>n/2)
{
    return arr[i];
}
}
return -1;
}
