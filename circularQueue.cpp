//circular queue implementaion

#include<iostream>
using namespace std;

class Queue
{
    
    int *arr;
    int front;
    int rear;
    int size;
    
    Queue()
    {
        size=100001;
        arr=new int[size];
        front=rear=-1;
    }
    
    void enque(int data)
    {
        //to check queue is full
        if((front==0 &&  rear ==size-1) || rear==(front-1)%(size-1))
        {
            cout<<"Queue is full"<<endl;
        }
        
        else if(front==-1)
            
                front=rear=0;
                arr[rear]=data;
            
            else if(rear==size-1 && front!=0){   //to maintain cyclic nature
                rear=0;
                arr[rear]=data;
            }
            else{
                rear++;
            }
            //push data inside the queue
                arr[rear]=data;
                return true;    
            
        }
        
        //Dequues top element from the queue,returns -1 if no elemen tis present
        
        int Dequeue()
        {
            if(front==-1)  //to check queue is empty
            {
                cout<<"queue is empty"<<endl;
                return -1;
            }
            int ans=arr[front];
            arr[front]=-1;
            if(front==rear)//single element is present
            {
                front=rear=-1;
            }
            else if(front==size-1)
            {
                front=0;   //to maintain cyclic future
            }
            else{
                front++;
            }
            return ans;
        }
        
    
    
    
};
