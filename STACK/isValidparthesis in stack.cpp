//checking the valid parthsis in the give question

#include<iostream>
#include<stack>

using namespace std;

bool isValid(string exp)
{
    char<stack> s;

    for(int i=0;i<exp.length();i++)
    {
        char ch=exp[i];
        
        
        //if opening bracket,stack push
        //if closing bracket,check stacktop and pop
        
        if(ch=='(' || ch=='{'||ch=='[')
        {
            s.push(ch);
        }
        else{
            //closing bracket
            if(!s.empty())
            {
                char top=s.top();
              if((ch==')'&&top=='(')||(ch=='{'&&top=='}')||(ch==']'&&top=='[')) 
              {
                  s.pop();
              }
              else{
                  return false;
              }
            }
            else{
                return false;
            }
        }
        
    }
    
    if(!s.empty())

{
    return true;
}    
}


int main()
{
    
    
    
    return 0;
}
