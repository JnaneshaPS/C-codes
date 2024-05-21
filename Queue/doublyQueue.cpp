//Doubly ended queue implementation

#include<iostream>
#include<queue>
using namespace std ;

class Queue{
    
    int *arr;
    int front;
    int rear;
    int size;
   public:
    
    Queue(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;
    }
    
    bool push_front(int data)
    {
        if(front==0&& rear ==size-1&&((front!=0)&&rear==(front-1)%(size-1)))
        {
            return false;
        }
      else  if(front==-1)
        {
            front=rear=0;
        }
        else if(front==0&&rear!=size-1)
        {
            front=size-1;
        }
        else{
            rear++;
        }
        arr[front]=data;
        return true;
    }
    
    bool push_back(int data)
    {
        if(front==0&& rear ==size-1&&((front!=0)&&rear==(front-1)%(size-1)))
        {
            return false;
        }
      else  if(front==-1)
        {
            front=rear=0;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
        }
        else{
            front--;
        }
        arr[rear]=data;
        return true;
    }
    
    int pop_front()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)//if single element is present
        {
            front=rear=-1;
        }
        
        else if(front==size-1)
        {
            front=0; //to maintain cyclic nature
        }
        else{
            //normal flow
            front++;
        }
        return ans;
    }
    
    int pop_back()
    {
if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)//if single element is present
        {
            front=rear=-1;
        }
        
        else if(rear==0)
        {
            rear=size-1; //to maintain cyclic nature
        }
        else{
            //normal flow
            rear--;
        }
        return ans;
    }
    
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        
        return arr[front];
    }
    
    int getRear()
    {
        if(front==-1)
        {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        return false;
    }
    
    bool isFull()
    {
        if(front==0&& rear ==size-1&&((front!=0)&&rear==(front-1)%(size-1)))
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q(5);
    
    q.push_front(12);
    q.push_back(14);
    
    cout<<"front element is->"<<q.getFront()<<endl;
    cout<<"back element is->"<<q.getRear()<<endl;
    
    q.pop_front();
        cout<<"front element is->"<<q.getFront()<<endl;

q.pop_back();

if(q.isEmpty())
{
    cout<<"queue is empty"<<endl;
}
else{
    cout<<"queue is not-empty"<<endl;
}
    
    
   return 0; 
}
