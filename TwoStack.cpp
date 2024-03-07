
//implentaion of 2 stack

#include<iostream>

using namespace std;

class TwoStack{
    
    //properties
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    
     //behaviour
    //creation of the constructor
    TwoStack(int size)
    {
        this->size=size;
        top2=size;
        arr=new int[size];
        top1=-1;
    }
    
    
//pushing top element into the Stack  1  
    void push1(int element)
{
    //this represents that atleat 1space is between top1stack and top2 stack
    if(top2-top1 > 1)
    {
         top1++;
    arr[top1]=element;
    }
    else{
        cout<<"stack is full cannot insert the element"<<endl;
    }
    
   
}

//push the element in the stack2
    void push2(int element)
{
    //this represents that atleat 1space is between top1stack and top2 stack
    if(top2-top1 > 1)
    {
         top2--;
    arr[top2]=element;
    }
    else{
        cout<<"stack is full cannot insert the element"<<endl;
    }
    
   
}

//removing the top element from the stack
int pop1()
{
    if(top1>=0)
    {
        int ans=arr[top1];
        top1--;
        return ans;
    }
    
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
}

int pop2()
{
    if(top2<size)
    {
        int ans=arr[top2];
        top2++;
        return ans;
    }
    
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    
    
}

//returning the top element of the stack
int peek(){
    if(top1>=0)
    {
        return arr[top1];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
}

//checking the stack is empty or not
bool isEmpty()
{
    if(top1>=0)
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
    
    TwoStack s(5);
    s.push1(10);
    s.push1(1);
    s.push2(17);
    

    s.pop1();
    

 
   
    
    return 0;
}
