int findClosest(int n,int k,int arr[])
{
   if(n==-1)
   return -1;

int mindiff=INT_MAX;
int closest=arr[0];

for(int i=0;i<n;++i)
{
    int current=abs(k-arr[i]);
   if(current<mindiff)
{
    mindiff=current;
   closest=arr[i];
}
else if(current==mindiff&&arr[i]==closest)
{
    current=arr[i];
}
}
return closest;
}

  
