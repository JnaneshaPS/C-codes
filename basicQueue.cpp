//basic operation on queue;

#include<iostream>
#include<queue>

using namespace std;

int main()

{
    
    //creating the queue
    queue<int> q;
    
    q.push(1);
    
    cout<<"front element is"<<q.front()<<endl;
  //  cout<<"rear element is "<<q.rear()<<endl;
  
  q.pop();
    
    q.push(2);
        cout<<"front element is"<<q.front()<<endl;
   // cout<<"rear element is "<<q.rear()<<endl;
    
    q.push(3);
        cout<<"front element is"<<q.front()<<endl;
   // cout<<"rear element is "<<q.rear()<<endl;
    
    cout<<"size of the queue is->"<<q.size()<<endl;
    
    q.pop();
    
    cout<<"size of the queue is->"<<q.size()<<endl;
    
    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
        
        }
        else{
            cout<<"queue is not empty"<<endl;
        }
    
    return 0;
}