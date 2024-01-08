//detect and remove loope in linked list

#include <iostream>
#include<map>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    //constructor
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    
    //destructor
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free"<<endl;
    }
};

//detect the loop

bool detectLoop(Node* head)
{
    if(head==NULL)
    
        return false;
    
    map<Node*,bool>visited;
    
    Node* temp=head;
    
    while(temp!=NULL)
    {
       //cycle is presented
       if(visited[temp]==true)
       
       {
           cout<<"cycle is present in the element"<<" "<<temp->data<<endl;
           return 1;
       }
       
       visited[temp]=true;
       temp=temp->next;
    }
    return false;
}

//floyd detect looop

Node* floydDetect(Node* head)
{
    if(head==NULL)
    
        return false;
    
    
    Node* slow=head;
    Node* fast=head;
    
    while(slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        
        if(slow==fast)
        {
            return slow;
        }
    }
    return false;
}

int main()
{
if(iscircularlist(tail))
{
    cout<<"Given linked list is circular in nature"<<endl;
}
else
{
    cout<<"linked list is not circular in nature"<<endl;
}
    return 0;
    
    if(detectLoop(head))
    {
        cout<<"cycle is present in the linked list"<<endl;
    }
    else
    {
        cout<<"cycle is not present in the linked list"<<endl;
    }
    
    if(floydDetect(head))
    {
        cout<<"there is prsence of floyd loop in the linked list"<<endl;
    }
    else{
        cout<<"floyd loop is not present in the loop"<<endl; 
    }
}
