

#include <stdio.h>
#include<stdlib.h>

int a[50],n;

void create()
{
    printf("enter the number of element");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
}

void display()
{
    printf("array elements are");
    
    for(int i=0;i<n;i++)
    {
        printf("%d element is%d",i+1,a[i]);
         printf("\n");
    }
   ;
}

void insert()
{
    int ele,p;
    printf("enter the element to insert");
    scanf("%d",&ele);
    printf("enter the position to insert");
    scanf("%d",&p);
    for(int i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=ele;
    n++;
}
void delete()
{
    int p;
    printf("enter the position to delete");
    scanf("%d",&p);
    
    for(int i=p;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}

int main()
{
    int ch;
    
    while(1)
    {
        printf("1.create()");
        printf("\n 2.display()");
        printf("\n 3.insert()");
        printf("\n 4.delete()");
        printf("\n 5.exit(0)\n");
        
        printf("enter the option");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:exit(0);
            break;
            default :printf("enter the proper option");
        }
    }
    return 0;
    }
