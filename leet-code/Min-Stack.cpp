class minStack(
{
private:
       stack<int> s;
       stack<int> minstack;
public:
     minStack()
{
}
void push(int val)
{
    s.push(val);

if(minstack.empty()||val<=minstack.top())
{
     minstack.push(val);
}
}
void pop()
{
     if(stack.top()==minstack.top())
{
       minstack.pop();
}
stck.pop();
}
int top()
{
return stack.top();
}
int getMin()
{
return minstack.top()
}
};

};
