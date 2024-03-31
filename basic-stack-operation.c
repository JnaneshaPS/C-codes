#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int s[MAX],x,top;

void push()
{
    if(top>=MAX)
    {
        printf("stack is overflow");
    }
    
    printf("enter the eleementn to insert");
    scanf("%d",&x);
    s[++top]=x;
}
void pop()
{
    if(top<=-1)
    {
        printf("stack underflow");
    }
    top--;
}

void display()
{
    if(top>=MAX-1)
    {
        printf("stack overflow");
    }
    
    for(int i=top;i>=0;i--)
    {
        printf("element is %d",s[i]);
        printf("\n");
    }
}
void palin()
{
    int floor=0;
    int ceil=top;
    int flag=0;
    while(floor<ceil)
    {
        if(s[floor]!=s[ceil])
        {
            flag=1;
            break;
        }
        floor++;
        ceil--;
    }
    if(flag==1)
    printf("it is not palindrome");
    else
     printf("it is palindrome");
}

int main()
{
    int ch;
    top=-1;
    
    while(1)
    {
        printf("1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.palindrome");
        printf("\n 5.exit");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:palin();
            break;
            case 5:exit(0);
            break;
            default:printf("case is wrrong");
        }
    }
    return 0;
}