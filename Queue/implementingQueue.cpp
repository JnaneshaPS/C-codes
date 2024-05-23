//implementaion of teh queue using class
#include<iostream>

using namespace std;

class Queue{
    
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    
    Queue( ){
        size=100001;
        arr=new int[size];
        front=0;
        rear=0;
    }
    
    bool isEmpty()
    {
        //implement the isEmpty() function
        if(front==rear)
            return true;
        
        else{
           return false;
        }
    }
    
    void enque(int data)
    {
        if(rear==size)
        cout <<"size is full"<< endl;
        
        else{
            arr[rear]=data;
            rear++;
        }
    }
    
    int deque()
    {
        if(front==rear){
        return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    
    int Front()
    {
        if(front==rear)
        {
            return -1;
        }

        
        return arr[front];
    
    } 
};

int main()
{
    
    Queue q;
    
    q.enque(10);
    cout<<"front element is->"<<q.Front()<<endl;
    q.deque();
    
    
    
    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    
    return 0;
}
