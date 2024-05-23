#include<stdio.h>
#include<ctype.h>


int s[100],top=-1;

void push(char x)
{
    s[++top]=x;
}
int pop()
{
    if(top==-1)
     return -1;
    else 
     return s[top--];
}
int priority(char x)
{
    if(x=='(')
      return 0;
    if(x=='+'||x=='-')
     return 1;
    if(x=='*'||x=='/')
     return 2;
    if(x=='$'||x=='^')
     return 3;
    return 0;
}
int main()
{
    char exp[100],*e,x;
    printf("enter the expression");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
        printf("%c",*e);
        else if(*e=='(')
         push(*e);
         else if(*e==')')
         {
           while((x=pop())!='(')
           printf("%c",x);
         }
         else{
             while(priority(s[top])>=priority(*e))
                 printf("%c",pop());
                 push(*e);
         }
             e++;
    }
    while(top!=-1)
       printf("%c",pop());
       printf("\n");
       return 0;
    }
    
