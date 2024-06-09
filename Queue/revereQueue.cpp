//reversing the element in the queue

#include<iostream>
#include<queue>

using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    
    Queue(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;
    }
    
    queue<int>  rev(queue<int> q)
    {
        stack<int> s ;
        
        while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
        }
        
        while(!s.empty())
        {
            int element=s.top();
            s.pop();
            q.push(element);
            
        }
        return q;
        
    }
}
