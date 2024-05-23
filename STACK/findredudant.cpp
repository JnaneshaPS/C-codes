//finding the redudant in the stack

#include<iostream>
#include<stack>

using namespace std;

void redudantBracket(string &s)
{
  stack<char> st;
  
  for(int i=0;i<s.length();i++)
  {
      char ch=st[i];
      
      if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
      {
          st.push();
      }
      else{
          
          if(ch==')')
          {
              bool isReduduant=true;
              while(st.top()!='(')
              {
                  char top=st.top();
                  if(top=='+'||top=='-'||top=='*'||top=='/')
                  {
                      isReduduant=false;
                  }
               st.pop();
              }
              if(isReduduant==true)
              {
                  return true;
              }
          }
      }
  }
  return false;
}

int main()
{
    
    
    
    return 0;
}
