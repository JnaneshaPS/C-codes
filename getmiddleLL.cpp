
//middle of linked list
#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next-NULL;
    }
};

//find middle element throgh recursion

Node* getMiddle(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    //2 Node
    if(head->next->next==NULL)
    {
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

/*

int getLength(Node* head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

Node* findMiddle(Node* head)
{
    int len=getLength(head);
    int middle=(len/2);
    
    Node* temp=head;
    int cnt=0;
    while(cnt<middle)
    {
        cnt++;
        temp=temp->next;
    }
    return temp;
}
*/

int main()
{
    
    return 0;
}
