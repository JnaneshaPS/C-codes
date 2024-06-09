
#include <iostream>

using namespace std;
//reverse of the elements in linked list through recrsion

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

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


Node* reverse(Node* head)
{
    //base case
    if(head==NULL||head->next==NULL)
    {
        cout<<"linked list is empty or has only one element"<<endl;
        return head;
    }
    
    Node* smallHead=reverse(head->next);
    head->next->next=head;
    return smallHead;
}

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

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtHead(head,2);
    print(head);
    
    insertAtTail(tail,5);
    print(head);
    
    insertAtPosition(tail,head,2,6);
    print(head);
    
    insertAtPosition(tail,head,3,7);
    print(head);
    
    
    reverse(head);
    print(head);
    
    
    return 0;
    
}

