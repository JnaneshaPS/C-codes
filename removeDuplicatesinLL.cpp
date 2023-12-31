//c++ code to remove duplicates in sorted linked list
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
    return head;
}

int main()
{
    Node* head=NULL;
    //instert element to the linked list
    
    uniquesortedList(head);
    
    
    return 0;
}

//remove duplicates in the unsoted linked list

//remove duplocates from unsorted linked list
#include<iomanip>

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

void swapData(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSort(Node* head) {
    if (start == nullptr || start->next == nullptr) {
        // Empty or single-node list is already sorted
        return;
    }

    bool swapped;
    Node* current;
    Node* lastSorted = nullptr;

    do {
        swapped = false;
        current = start;

        while (current->next != lastSorted) {
            if (current->data > current->next->data) {
                swapData(current, current->next);
                swapped = true;
            }
            current = current->next;
        }

        lastSorted = current;
    } while (swapped);
}


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
    return head;
}

int main()
{
    Node* head=NULL;
    //sort the limlked list first
    bubbleSort(head);
    uniqusortedList(head);
    
    
    
    return 0;
}
