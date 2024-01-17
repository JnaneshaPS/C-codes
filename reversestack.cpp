//reverse the stack

#include<iostream>
#include<stack>

void insertAtBottom(stack<int> &stack,int x)
{
    //base case
    if(stack.empty())
    {
        stack.push(x);
        return;
    }
    
    int num=stack.top();
    stack.pop();
    
    //recursive call
    
    insertAtBottom(stack,x);
    stack.push(num);
}

void rverseStack(stack<int> &stack)
{
    //base acse
    if(stack.empty())
    {
        
        return;
    }
    
    int num=stack.top();
    stack.pop();
    
    //recursive call
    rverseStack(stack);
    
    insertAtBottom(num);
}

using namespace std;



int main()
{
    
    
    
    return 0;
}
