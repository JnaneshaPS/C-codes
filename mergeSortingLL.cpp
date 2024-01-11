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

Node* merge(Node*left,right)
{
    if(left==NULL)
    {
        return right;
    }
    if(right==NULL)
    {
        return left;
    }
    
    Node* ans=new Node(-1);
    
    Node* temp=ans;
    
    while(left!=NULL&&right!=NULL)
    {
        if(left->data<right->data)
        {
            temp->next=left;
            temp=left;
            temp=temp->next;
        }
        else{
            temp->next=right;
            temp=right;
            temp=temp->next;
        }
    }
    while(left!=NULL)
    {
        temp->next=left;
        temp=left;
        temp=temp->next;
    }
    while(right!=NULL)
    {
        temp->next=right;
        temp=right;
        temp=temp->next;
    }
    ans=ans->next;
    return ans;
}

Node* findMid(Node* head)
{
    Node* slow=head;
    Node* fast=head->next;
    
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

Node*  mergeSort(Node* head)
{
    //merge sort done through recursion
    //base case
    if(head==NULL||head->next==NULL)
    {
        return head;
        
    }
    //to spilt the linked list into two parts 
    Node* mid=findMid(head);
    
    Node* left=head;
    Node* right=mid->next;
    
    mid->next=NULL;
    
    //recursive call to sort left and right side
    
    left=mergeSort(left);
    right=mergeSort(right);
    
    //merge the left and right parts
    
    Node* reasult=merge(left,right);
    
    return reasult;
}

int main()
{
   

    return 0;
}


