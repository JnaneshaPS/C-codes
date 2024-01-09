//c
#include<iostream>

using namespace std;

class Node{
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
            this=this->next;
        }
        cout<<"memory is free"<<endl;
    }
    
};

Node* uniqusortedList(Node* head)
{
    //empty list
    if(head==NULL)
    return NULL;
    
    //non-empty list
    
    Node* curr=head;
    
    while(curr!=NULL)
    {
        
        if((curr->next!=NULL) && curr->data==curr->next->data)
        {
            Node* next_node=curr->next->next;
            Node* nodeTodelete=curr->next;
            delete(nodeTodelete);
            curr->next=next_node;
           
            
        }
        else{
            curr=curr->next;
        }
    }
}

int main()
{
    Node* head=NULL;
    //instert element to the linked list
    
    uniquesortedList(head);
    
    
    return 0;
}
