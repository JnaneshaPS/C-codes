//finding the celbrity in the part:celebrity is one who is famous in the Party
#include<iostream>
#include<stack>

using namespace std;
class Ntack{
    int *arr;
    int *top;
    int *next;
    
    int n,s;
    int freespot;
    
    public:
    //intailze the array ;
    Ntack(int N,int S)
    {
        n=N;
        s=S;
        arr=new int[s];
        top=new int[s];
        next=new int[n];
    }
        
        //top intialize
        
        for(int i=0;i<n;i++)
        {
            top[i]=-1;
        }
        
        //next intialize
        for(int i=0;i<s;i++)
        {
            next[i]=i+1; 
        }
        
        //update the last index value to [s-1] to -1
        next[s-1]=-1;
        
        freespot=0;
        
        //push 'X' into the Mth stack.returns true if it gets pushed into the stack,and false otherwise
        
        bool push(int x,int m)
        {
            //check for overflow
            if(freespot==-1)
            {
                return false;
            }
            
            //find index 
            int index=freespot;
            
            //update freespot
            freespot=next[index];
            
            //insert into element
            arr[index]=top[m-1];
            
            //update top
            top[m-1]=index;
            
            return true;
            
        }
    //Pop element from the M stack return -1 if stack is empty
    
    int pop(int m)
    {
        //check underflow codntion 
        if(top[m-1]==-1)
        {
            return -1;
        }
        
        int index=[m-1]; 
        
        top[m-1]=next[index];
        
        next[index]=freespot;
        
        freespot=index;
        
        return arr[index];
    }
    
}



int main()
{
    
    
    
    return 0;
}


