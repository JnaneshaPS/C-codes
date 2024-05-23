//finding the clebrity

#include<iostream>
#include<stack>

using namespace std;

int clebrity(vector<vector>>&M,int n)
{
    stack<int> s;
    
    //push all elelment to the stack
    for(int i=0;i<n;i++)
    {
        s.push(i);
    }
    
    //step2:get 2 elemnts and compare them
    
    while(s.size()>1)
    { 
        int a=s.top();
        s.pop();
        
        int b=s.top();
        s.pop();
        
        if(knows(M,a,b,n))
        {
            s.push(b);
        }
        else{
            push(a);
       
        }
    }
    int candidate=s.top();
    //step3 :single element in a stack is potential celebrity
    //so verify it
    
    bool rowCheck=false;
    int zerocount=0;
    for(int i=0;i<n;i++)
    {
        if(M[i][candidate]==0)
        {
            zerocount++;
        }
    }
        //all zeroes
        if(zerocount==n)
        {
            rowCheck=true;
        }
    
    //columncheck
    
    bool columnCheck=false;;
    int oneCount=0;
    for(int i=0;i<n;i++)
    {
        if(m[i][candidate]==1)
        {
            oneCount++;
        }
    }
    if(oneCount==n-1)
    {
        columnCheck=true;
    }
    
    if(rowCheck==true&&columnCheck==true)
    {
        return candidate;
    }
   else{
       return -1;
   }
}

bool knows( vector<vector<int>>& M,int a ,int b,int n)
{
    if(M[a][b]==1)
    return true;
    else 
    return false;
}

int main()
{
    
    
    
    return 0;
}

