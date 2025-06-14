//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
//Implement the MinStack class:
//MinStack() initializes the stack object.
//void push(int val) pushes the element val onto the stack.
//void pop() removes the element on the top of the stack.
//int top() gets the top element of the stack.
//int getMin() retrieves the minimum element in the stack.
//You must implement a solution with O(1) time complexity for each function.
//Input
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]

class minStack{
       stack<int> s;
       stack<int> minStack;
public:
         minStack(){
         }

void push(int val){
    s.push(val);
    if(minStack.empty()||minStack.top()<=val){
         minStack.push(val);
    }else{
   minStack.pop(minStack.top());
    }
}

void pop(){
     s.pop();
     minStackpop();
}

int top(){
    return s.top();
}
int getMin(){
     return minStack.top();
}
}
