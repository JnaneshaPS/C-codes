#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct emp{
    int id;
    char ename[50];
    char dname[50];
    float sal;
};

void depsal(struct emp *ptr,int d);

int main()
{
    struct emp *ptr;
    int n;
    printf("enter the number of employes");
    scanf("%d",&n);
    ptr=(struct emp*)malloc(n*sizeof(struct emp));
    
    for(int i=0;i<n;i++)
    {
        printf("enter the employe id");
        scanf("%d",&((ptr+i)->id));
        printf("name of the employee");
        scanf("%s",((ptr+i)->ename));
        printf("enter the department name");
        scanf("%s",((ptr+i)->dname));
        printf("enter the salary");
        scanf("%f",&((ptr+i)->sal));
    }
    
    printf("display the details of employee");
    for(int i=0;i<n;i++)
    {
        printf("name of the employe is %s\n",((ptr+i)->ename));
        printf("id of the employee is %d\n",((ptr+i)->id));
        printf("name of the department is %s\n",((ptr+i)->dname));
        printf("salary of the employee is %f\n",((ptr+i)->sal));
    }
    depsal(ptr,n);
    
    return 0;
}

void depsal(struct emp *ptr,int n)
{
char d[50];
int tot=0;
printf("enter the department name");
scanf("%s",d);

for(int i=0;i<n;i++)
{
    if(strcmp(((ptr+i)->dname),d)==0)
    {
        tot=tot+((ptr+i)->sal);
    }
}
printf("total salary of the daprtment %s is %d",d,tot);
}