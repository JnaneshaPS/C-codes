//finding next smaller element in the stack

#include<iostream>
#include<stack>

using namespace std;

vector<int> nextSmallerElement(vector<int> arr,int n)
{
     stack<int> s;
     s.push(-1);
     vector<int> ans(n);
     
     for(int i=n-1;i>=0;i--)
     {
         int curr=arr[i];
         
         while(s.top()!=-1&&curr=<arr[s.top()])
         {
             s.pop();
             
         }
         ans[i]=s.top();
         s.push(curr);
     }
     return ans;
}

vector<int> prevSmallerElement(vector<int> arr,int n)
{
    stack<int> s;
    s.push(-1);
     vector<int> ans(n);
     
     for(int i=0;i<n;i++)
     {
         int curr=arr[i];
         
         while(s.top()!=-1&&curr=<arr[s.top()])
         {
             s.pop();
             
         }
         ans[i]=s.top();
         s.push(curr);
     }
     return ans;
}

 int largestRectangle(vector<int> &heights)
 {
     int n=heights.size();
     
     vector<int> next(n);
     next=nextSmallerElement(heights,n);
     
     vector<int> prev(n);
     prev=prevSmallerElement(heights,n);
     
     int area=INT_MIN;
     for(int i=0;i<n;i++)
     {
         int l=heights[i];

         if(next[i]==-1)
         {
             next[i]=n;
         }
         
   int b=next[i]-prev[i]-1;
         
         int newArea=l*b;
        area= maxArea(area,newArea);
     }
     return area;
 }


int main()
{
    
    
    
    return 0;
}

