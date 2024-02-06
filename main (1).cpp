//sum of maximum and minimumm elements in the subarrays of k
#include <iostream>
#include<queue> 

using namespace std;

int solve(int *arr,int n,int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);
    
    //addition of k size window
    
    for(int i=0;i<k;i++)
    {
        while(!maxi.empty()&&arr[maxi.back()]<=arr[i])
        maxi.pop_back();
        
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
        mini.pop_back();
        
        maxi.push_back(i);
        mini.push_back(i);
    }
    
    int ans=0;
    for(int i=k;i<=n;i++)
{
    ans +=arr[maxi.front()]+arr[mini.front()];
    
    //next window
    
    //removal
    while(!maxi.empty()&& 1-maxi.front()>=k)
    {
    maxi.pop_front();
    }
    
    while(!mini.empty()&& 1-mini.front()>=k)
    {
   mini.pop_front();
    }
    
    //addition
     while(!maxi.empty()&&arr[maxi.back()]<=arr[i])
        maxi.pop_back();
        
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
        mini.pop_back();
        
        maxi.push_back(i);
        mini.push_back(i);

}  
//make sure to consider  last window
    ans +=arr[maxi.front()]+arr[mini.front()];
   
   return ans;

}



int main()
{

int arr[7]={2,-5,-1,7,-3,-1,-2};
int k=2;

cout<<solve(arr,7,k)<<endl;


    return 0;
}
