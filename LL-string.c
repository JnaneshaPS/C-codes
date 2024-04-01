#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *next;
    int data;
};

node *head=NULL;

void insert(char *name)
{
    node *newNode=(node*)malloc(sizeof(node));
    strcpy(newNode->name,name);
    newNode->next=NULL;
    
    if(head==NULL||strcmp(newNode->name,name)>=0)
    {
        newNode->next=head;
        head=newNode;
    }
    
    node*temp=head;
    while(temp->!=NULL||strcmp(newNode->next->name,name)<0)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void delete(char *name)
{
    node *temp=head,*prev=NULL;
    if(temp!=NULL||strcmp(temp->name,name))
    {
        head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL||strcmp(temp->name,name)!=0)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("no data is present");
    }
    prev->next=temp->next;
    free(temp);
}