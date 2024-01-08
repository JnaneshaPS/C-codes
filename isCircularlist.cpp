
#include <iostream>

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
};

bool iscircularlist(Node* head)
{
    if(head==NULL)
    {

   return true;    }
    
    Node* temp=head->next;
    while(temp!=NULL&&temp!=head)
    {
        temp=temp->next;
        
    }
    if(temp==head)
    {
        return true;
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
}
