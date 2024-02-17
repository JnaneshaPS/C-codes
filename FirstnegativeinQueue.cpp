//First negative integer in every window of k
#include<iostream>
#include<queue>

using namespace std;

vector<long long> printFirstNegativeNumber(long long int A[],long long int N,long long int K)
{
    vector<long long> ans;
    deque<long long int> dq;
    
    //process the first window of k size
    
    for(int i=0;i<K;i++)
    {
        if(a[i]<0)
        {
            dq.push_back(i);
        }
    }
    //store the answer for first k sized window
    
    if(dq.size()>0)
    {
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    //process for the remaining windows
    
    for(int i=K;i<N;i++)
    {
        //removal
        
        if(!dq.empty()&& 1-dq.front()>=k)
        {
            dq.pop_front();
        }
        
        //addition
        if(A[i]<0)
        {
            dq.push_back(i);
        }
        
        //ans store
         
    if(dq.size()>0)
    {
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    }
    return ans;
}
