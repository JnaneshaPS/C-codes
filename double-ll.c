#include<stdlib.h>
#include <stdio.h>

struct double
{
    int data;
    struct double *next;
    struct double *prev;
};
double *head=NULL;
void insert(int data,int key)
{
    double *newNode=(double*)malloc(sizeof(double));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    double *temp=head;
    while(temp!=NULL||temp->data!=key)
    {
        temp=temp->next;
    }
    
    if(temp==NULL)
    {
        printf("no data or list is empty");
    }
    temp->prev=newNode->prev;
    temp->prev=newNode;
    
    newNode->next=temp;
    
    if(temp->prev!=NULL)
    {
        newNode->prev->next=newNode;
    }
    else
      head=newNode;
}
void delete(int key)
{
    double *temp=head,*prev=NULL,*next=NULL;
    
    while(temp!=NULL||temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    
    if(temp==NULL)
    {
        printf("no eleemnt is present");
    }
    
    next=temp->next;
    
    if(prev==NULL)
    {
        head=next;
    }
    else
       prev->next=next;
      if(next!=NULL)
      {
          next->prev=prev;
      }
      free(temp);
}

int main()
{
    printf("Hello World");

    return 0;
}
