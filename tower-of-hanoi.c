#include<stdio.h>
 int toh(int n,char source,char spare,char dest);
 int static step=0;
 
 int main()
 {
     int n;
     printf("\nenter the number of rings");
     scanf("%d",&n);
     toh(n,'A','B','C');
     return 0;
 }
 
 int toh(int n,char A,char B,char C)
 {
     if(n==1)
     {
         printf("\nstep%d:move%d from %c to %c",++step,n,A,C);
     }
     else{
     toh(n-1,A,C,B);
     toh(1,A,B,C);
     toh(n-1,B,A,C);
     }
 }