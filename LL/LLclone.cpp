//making the clone of the linked list

#include <iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* random;
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->random=NULL;
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

//aprroach 1 with the time complxity of O(n)
/*
void insertAtTail(Node* head,Node* tail,int d)
{
    Node* newNode=new Node(d);
    
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
   
}

Node* copylist(Node* head)
{
    //step:! create a clone list
    Node* clonehead=NULL;
    Node* clonetail=NULL;
    
    Node* temp=head;
    
    while(temp!=cNULL)
    {
        
        insertAtTail(clonehead,clonetail,temp->data);
        temp=temp->next;
    }
    
    //step 2: Crate map ;
    
    unordered_map<Node*,Node*> oldToNewNode;
    
    Node* originalNode=head;
    Node* cloneNode=clonehead;
    
    while(originalNode!=NULL&&cloneNode!=NULL)
    {
        oldToNewNode[originalNode]=cloneNode;
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
    originalNode=head;
    cloneNode=clonehead;
    
    while(originalNode!=NULL)
    {
        cloneNode->random=oldToNewNode[originalNode->random];
         originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
    return clonehead;
}
*/

void insertAtTail(Node* tail,Node* head,int d)
{
    Node* newNode=new Node(d);
    
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

Node* cloneList()
{
    //step :1 create a clone list
    
    Node* cloneHead=NULL;
    Node* clonetail=NULL;
    
    Node* temp=head;
    
    while(temp!=NULL)
    {
        insertAtTail(cloneHead,clonetail,temp->data);
        temp=temp->next;
    }
    
    //step 2: cloneNodes add inBetwwen original list
    Node* originalnode=head;
    Node* clonenode=cloneHead;
    
    while(originalnode!=NULL&&clonenode!=NULL)
    {
        Node* next=originalnode->next;
        originalnode->next=clonenode;
        originalnode=next;
        
        next=clonenode->next;
        clonenode->next=originalnode;
        clonenode=next;
    }
    
    //step 3: random pointer copy
    
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            if(random->next!=NULL)
            {
        temp->next->random=temp->random->next;
            }
            else{
                temp->next=temp->random;
            }
        }
    }
    
    //step 4:revert the changes done in step2
    originalnode=head;
    clonenode=clonehead;
    
    while(originalnode!=NULL&&clonenode!=NULL)
    {
        originalnode->next=clonenode->next;
        originalnode=originalnode->next;
        
        if(originalnode!=NULL)
        {
        clonenode->next=originalnode->next;
        }
        clonenode=clonenode->next;
    }
    
    //step 5:return ans
    return clonenode;
}

int main()
{
   

    return 0;
}


