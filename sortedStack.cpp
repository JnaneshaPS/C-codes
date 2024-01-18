//sorting in array

#include<iostream>
#include<stack>

void sortedInsert(stack<int> &stack,int num)
{
    if(stack.empty()||(!stack.empty()&&stack.top<num))
    {
        stack.push(num);
    }
    int n=stack.top();
    stack.pop();
    
    //recursive call
    sortedInsert(stack,n);
    stack.push(n);
}


void sortStack(stack<int> &stack)
{
    if(stack.empty())
    {
        return;
    }
    
    int num=stack.top();
    stack.pop();
    
    //recursive call
    sortStack(stack);
    sortedInsert(stack,num);
}

using namespace std;



int main()
{
    
    
    
    return 0;
}
