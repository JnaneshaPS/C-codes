//insert element to bottom in the stack
#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> s)
{
    //base case
    
    if(s.empty())

    {
        s.push(x);
        return;
    }
    
    int num=s.top();
    s.pop();
    
    //recursive call
    
    solve(s,x);
    s.push(num);
}


stack<int> pushAtBottom(stack<int> &mStack,int x)
{
    solve(mStack,x);
    return mStack;
}


int main()
{
    
    
    
    return 0;
}
