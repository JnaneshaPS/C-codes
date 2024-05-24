
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
//implementaion of double linked list 


#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for the data with value->"<<val<<endl;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//get the kength of the linked list
int getLength(Node* head)
{
    int len=0;
      Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
//insertion of data to the head position double kinked list
void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    
    temp->next=head;
    head->prev=temp;
    head=temp;
}
//insertion of the element to tail position in doubly linked list
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp; 
}

//insert at any position in double linked list 

void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=0;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;
}
void deletePosition(int position,Node* &head)
{
    //to delete the first node or start node
    if(position==1)
    {
        Node* temp=head;
        temp->prev->next=NULL;
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<"lenth of the linked list is->"<<getLength(head)<<endl;
    
    insertAtHead(head,12);
    print(head);
    
    insertAtHead(head,18);
    print(head);
    
    insertAtHead(head,15);
    print(head);
    
    insertAtTail(tail,16);
    print(head);
    
    insertAtPosition(tail,head,4,14);
    print(head);
    
    //delete the element in doublr linked list
    deletePosition(3,head);
    print(head);
    
    cout<<"head is"<<head->data<<endl;
    cout<<"tail is"<<tail->data<<endl;
    return 0;
    
}

//circular linked list operation and implmentation
#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);

/*
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);
     */

   // if(isCircularList(tail)) {
     //   cout << " Linked List is Circular in nature" << endl;
    //}
    //else{
      //  cout << "Linked List is not Circular " << endl;
    //}

    return 0;
}
