//add two number in the linked list

#include <iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        }
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed and and memory is freed"<<endl;
    }
};
void insertAtTail(Node* &head,Node* &tail,int val)
{
    Node* temp=new Node(val);
    
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
    
}

Node* add(Node* first,Node* second)
{
    int carry=0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    
    while(first!=NULL && second!=NULL)
    {
        int sum=carry+first->data+second->data;
        
        int digit=sum%10;
        
        //create node and answer in the linked list
        insertAtTail(ansHead,ansTail,digit);
        
        //take the carry
        carry=sum/10;
        
        first=first->next;
        second=second->next;
    }
    while(first!=NULL)
    {
         int sum=carry+first->data;
          int digit=sum%10;
         insertAtTail(ansHead,ansTail,digit);
   carry=sum/10;
   first=first->next;
    }
    
    while(second!=NULL)
    {
        int sum=carry+second->data;
        
        int digit=sum%10;
        
        insertAtTail(ansHead,ansTail,digit);
        carry=sum/10;
        second=second->next;
    }
    
    while(carry!=0)
    {
        int sum=carry;
        int digit=sum%10;
        
        insertAtTail(ansHead,ansTail,digit);
        carry=sum/10;
    }
    return ansHead;
}

Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
//function to add add two numebrs in the linked list
Node* addTwoList(Node* first ,Node* second)
{
    //step:1
    first=reverse(first);
    second=reverse(second);
    //step:2
   Node* ans= add(first,second);
   
   //step:3
   ans=reverse(ans);
   return ans;
}


int main()
{
   

    return 0;
}

