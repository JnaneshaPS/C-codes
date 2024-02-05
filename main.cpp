
#include <iostream>
using namespace std;

class kQueue{
  
  public:
      int n;
      int k;
      int *front;
      int *rear;
      int *arr;
      int *next;
      int freeSpot;
      
      public:
      kQueue(int n,int k)
      {
          this->n=n;
          this->k=k;
          front=new int[k];
          rear=new int[k];
          
         for(int i=0;i<k;i++)
         {
             front[i]=-1;
             rear[i]=-1;
             
         }
         arr=new int[n];
         next=new int[n];
         for(int i=0;i<n;i++)
         {
             next[i]=i+1;
         }
         next[n-1]=-1;
         freeSpot=0;
      }
      
      void enque(int data,int qn)
      {
          //overflow
          if(freeSpot==-1)
          {
              cout<<"No empty space is present"<<endl;
              return;
          }
          
          //find the first three index
          int index=freeSpot;
          
          //update freeSpot
          freeSpot=next[index];
          
          //check wether the first elelment
          if(front[qn-1]==-1)
          {
              front[qn-1]=index;
          }
          else{
              //link new element to the previous element
              next[rear[qn-1]]=index;
          }
          
          //update next
          next[index]=-1;
          
          //update rear
          rear[qn-1]=index;
          
          //push element
          arr[index]=data;
      }
      
      
      int dequeu(int qn)
      {
          //underflow  
          if(front[qn-1]==-1)
          {
              cout<<"queue underflow"<<endl;
              return 0;
          }
          
          //find index to pop
          int index=front[qn-1];
          
          //move the front
          front[qn-1]=next[index];
          
          //manage the freeSpot
          next[index]=freeSpot;
          freeSpot=index;
          return arr[index];
      }
};

int main()
{
         
         kQueue q(10,3);
         q.enque(3,1);
         q.enque(2,1);
         q.enque(4,2);
         
         cout<<q.dequeu(1)<<endl;

    return 0;
}
