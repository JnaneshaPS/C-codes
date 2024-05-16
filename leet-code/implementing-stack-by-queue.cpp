class Stack
{
    private:
        queue<int> q1;
      queue<int> q2;
  public:
           Stack()
{
}
   void push(int x)
{
     q1.push(x);
    while(!q1.empty())
{
      q2.push(q1.front())
      q1.pop();
}
swap(q1,q2)
}
int pop()
{
 int element=q1.front();
   q1.pop();
return element;
}
int top()
{
return q1.front();
}
bool isEmpty()
{
    return q1.empty();
}
};
