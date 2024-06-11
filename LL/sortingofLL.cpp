//srt 0,1,2 in the linked list

#include <iostream>

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
/*

Node* sortList(Node* head)
{
    int zeroCount=0;
    int firstCount=0;
    int secondCount=0;
    
    Node* temp=head;
    
    while(temp!=NULL)
    {
        
        if(temp->data==0)
        zeroCount++;
        
        else if(temp->data==1)
        firstCount++;
        
        else if(temp->data==2)
        secondCount++;
        
         temp=temp->next;
    }
   temp=head;
   
   while(temp!=NULL)
   {
       if(zeroCount!=0)
       {
           temp->data=0;
           zeroCount--;
       }
       else if(firstCount!=0)
   {
       temp->data=1;
       firstCount--;
   }
   else if(secondCount!=0)
   {
       temp->data=2;
       secondCount--;
   }
   temp=temp->next;
   }
}
*/

/*

void insertAtTail(Node* &tail,Node* curr)
{
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node* head)
{
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
    
    Node* curr=head;
    
    //craete a seperate list for the 0s,1s and 2s
    while(curr!=NULL)
    {
        int value=curr->data;
        
        if(value==0)
        {
            insertAtTail(zeroTail,curr);
        }
        
        else if(value==1)
        {
            insertAtTail(oneTail,curr);
        }
        else if(value==2)
        {
            insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }
    
    //merge the three seperate list
    
    //merege 1s if 1s is not empty
    if(oneHead->next!=NULL)
    {
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }

//for the 2s 
else if(twoHead->next!=NULL)
{
    oneTail->next=twoHead->next;
}

//setup head
head=zeroHead->next;

//delete the dummy nodes

delete oneHead;
delete zeroHead;
delete twoHead;

return head;

}
*/

//mereg two sorted linked list

void solve(Node* <int> first,Node* <int> second)
{
    Node* curr1=first;
    Node* next1=curr1->next;
    Node* curr2=second;
    Node* next2=curr2->next;
    
    while(next1!=NULL&& curr2!=NULL)
    {
        if((curr2->data >= curr1->data)&&(curr2->data<=next1->data))
        {
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            
            curr1=curr2;
            curr2=next2;
        }
        else{
            //move forward the curr1 and next1
            curr1=next1;
            next1=next1->next;
            
            if(next1==NULL)
            {
                curr1->next= curr2;
                return first;
            }
            else{
                   
            }
        }
    }
    
}

Node* <int> sortList(Node* <int> first ,Node* <int> second)
{
    if(first==NULL)
    
        return second;
    
    
    if(second==NULL)
    
        return first;
    
    solve(first,second);
    
}

int main()
{
    //insert element into the linked list
    
  //  perform the sorting operation of the 0's,1's and 2's in the linked list
  
  sorting(head);

    return 0;
}
