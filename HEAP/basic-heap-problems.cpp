

#include <iostream>

using namespace std;

class heap
{
    public:
            int arr[100];
            int size;
            
            heap()
            {
                arr[0]=-1;
                size=0;
            }
            
            void insert(int val)
            {
                size=size+1;
                int index=size;
                arr[index]=val;
               
               while(index>1)
               {
                   int parent=index/2;
                   if(arr[index]>arr[parent])
                   {
                       swap(arr[index],arr[parent]);
                        index=parent;
                   }
                   else{
                       return ;
                   }
                  
               }
            }
            
            void print()
            {
                for(int i=1;i<=size;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            
            void deleteFromHeap()
            {
                if(size==0)
                {
                    cout<<"no element to delete"<<endl;
                    return;
                }
                
                //step 1:put last element to root element
                arr[1]=arr[size];
                
                //step 2:remove last element
                size--;
                
                //take root node to the proper position
                
                int i=1;
               
                
                while(i<size)
                {
                     int leftIndex=2*i;
                int rightIndex=2*i+1;
                
                if(leftIndex<size&&arr[i]<arr[leftIndex])
                {
                    swap(arr[i],arr[leftIndex]);
                    i=leftIndex;
                }
                else if(rightIndex<size&&arr[i]<arr[rightIndex])
                {
                    swap(arr[i],arr[rightIndex]);
                    arr[i]=rightIndex;
                }
                else{
                    return;
                }
                
                }
                
            }
};

int main()
{
    heap h;
    h.insert(20);
    h.insert(24);
    h.insert(40);
    h.insert(50);
    h.insert(45);
    h.deleteFromHeap();
    h.print();
    
    return 0;
}
