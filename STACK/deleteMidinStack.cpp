//deletin gthe middle element in the stack

#include<iostream>
#include<stack>

using namespace std;

void solve(stack <int>&Inputstack,int N,int size)
{
    if(Inputstack==size/2)
    {
        Inputstack.pop();
        return;
    }
    
    int num=Inputstack.top();
    Inputstack.pop();
    
    //recursive call
    solve(Inputstack,count+1,size);
    
    Inputstack.push(num);
}


int deleteMiddle(stack <int>&Inputstack,int N)
{
    int count=0;
    
    solve(Inputstack,count,N)
}

int main()
{
    
    
    return 0;
}
