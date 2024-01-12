
//introduction to new data stracture thae is Stack which is is called LIFO(Last in First Out)

#include<iostream>

using namespace std;

class Stack{
    
    //properties
    public:
    int *arr;
    int size;
    int top;
    
    
     //behaviour
    //creation of the constructor
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    
//pushing top element into the Stack    
    void push(int element)
{
    if(size-top > 1)
    {
         top++;
    arr[top]=element;
    }
    else{
        cout<<"stack is full cannot insert the element"<<endl;
    }
    
   
}

//removing the top element from the stack
void pop()
{
    if(top>=0)
    {
        top--;
    }
    
        else{
            cout<<"stack is empty"<<endl;
        }
    
    
}

//returning the top element of the stack
int peek(){
    if(top>=0)
    {
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
}

//checking the stack is empty or not
bool isEmpty()
{
    if(top>=0)
    {
        cout<<"stack is not-empty"<<endl;
        return true;
    }
    cout<<"stack is empty"<<endl;
    return false;
}

};



int main()
{
    
    Stack s(5);
    s.push(10);
    s.push(1);
    s.push(17);
    
   cout<<s.peek()<<endl;
    
    s.pop();
    cout<<"after poping the top element of the stack"<<endl;
   cout<<s.peek()<<endl;

   s.isEmpty();
   
    
    return 0;
}