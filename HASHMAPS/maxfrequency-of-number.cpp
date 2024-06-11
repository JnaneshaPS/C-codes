//this is the basic finding frequency of the number oresent in theh array

int maxfrequency(vector<int> &arr,int n)
{
    unordered_map<int,int> count;
int maxFreq=0;
int maxAns=0;
  for(int i=0;i<n;i++)
{ 
 count[arr[i]]++;
maxFreq=max(maxFreq,count[arr[i]]);
}
  for(int i=0;i<n;i++)
{ 
if(maxFreq==count[arr[i]]);
maxAns=arr[i];
break;
}
return maxAns;
}

       
