#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 5

int i[max];
int front=-1,rear=-1;

int insert(int d)
{
    if(rear==max-1)
    {
        printf("queue overflow");
    }
    else{
        if(front==-1)
         front=0;
        rear=rear+1;
        i[rear]=d;
     printf("caller added->%d",d);
    }
}
int delete()
{
    if(front==-1)
     printf("queue has no element to delete");
     else
     {
         printf("callerid deleted->%d",i[front]);
         front++;
     }
     if(front>rear)
     front=rear=-1;
}
void display()
{
    if(rear==-1)
    printf("calll queue is empty");
    else{
        printf("\ncalls held in queue:\n");
        for(int j=front;j<=rear;j++)
            printf("%d",i[j]);
    }
}
int main()
{
    int ch;
    int callerid;
    while(1)
    {
        printf("\n1.create callid");
        printf("\n 2.delete callerid");
        printf("\n 3.display calle details");
        printf("\n 4.exit");
        printf("\nenter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the callerid\n");
            scanf("%d",&callerid);
            insert(callerid);
                break;
            case 2:
            delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("enter the proper option");
        }
    }
    return 0;
        }
