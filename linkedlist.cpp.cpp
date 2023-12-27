
#include <iostream>

using namespace std;

//Linked list implementation
class Node
{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        //free the memory
        if(this->next!=NULL)
        {
           delete next;
           this->next=NULL;
        }
        cout<<"memory is free with data"<<value<<endl;
    }
};

//insert at head

void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

//insert the element at the end of the list
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail= tail->next;
    
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
 if(position==1)
 {
     insertAtHead(head,d);
 }
 Node* temp=head;
 int cnt=1;
 while(cnt<position-1)
 {
     temp=temp->next;
     cnt++;
 }
 
 if(temp->next==NULL){
     insertAtTail(tail,d);
     return;
 }
 //creating a node for data
 Node* nodeToInsert=new Node(d);
 
 nodeToInsert->next=temp->next;
  
 temp->next=nodeToInsert;
}

//print the values of linked list
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; 
}

//delete the element from the position

void deletePosition(int position,Node* &head)
{
    //to delete the first node or start node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        //memory free of start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting middle or last node
        Node* curr=head;
        Node* prev=NULL;
        
        int cnt=1;
        while(cnt<=position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main()
{
   //create a new node 
   Node* node1=new Node(10);
   
   cout<<node1->data<<endl;
   cout<<node1->next<<endl;
   
   //head pointed to node1
   Node* head=node1;
   Node* tail=node1;
   
   insertAtHead(head,11);
   insertAtTail(tail,12);
   print(head);
   
   insertAtHead(head,15);
   print(head);
   
   //insert element in any position
   insertAtPosition(tail,head,3,20);
   
   print(head);
   
   //deleting the elemnt
   deletePosition(1,head);
   print(head);
   
   //know the elemnt of yhe tail and head
   
   cout<<"head is"<<head->data<<endl;
   cout<<"tail is"<<tail->data<<endl;
   

    return 0;
}

