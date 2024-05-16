
class Stack{

private:
        stack<int> s1;
        stack<int> s2;

void transform()
{
   while(!s2.empty())
{
        s1.push(s2.top())
        s2.pop()
}
}
   public:
          Stack()
{
}
void push(int x)
{
     s2.push(x);
}
int pop()
{
     if(s1.empty())
{   
       transform();
}
int element=s1.top();
s1.pop();
return element;
}
int peek()
{
         if(s1.empty()}
{ 
        transform();
}
return s1.top();
}
int empty()
{
return s1.empty()&&s2.empty();
}
};
