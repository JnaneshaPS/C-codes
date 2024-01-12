
//introduction to new data stracture thae is Stack which is is called LIFO(Last in First Out)
#include<iostream>
#include<stack>

using namespace std;
int main()
{
    //creating the stack
    stack <int> s;
    
    //pushing the element into the stack
    s.push(10);
    s.push(29);
    
    //poping the element from the stack
    s.pop();
    //printing the top element
    cout<<"top element is->"<<" "<<s.top()<<endl;
    
    //checking stack is empty or not
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    //finding the size of the stack
    cout<<"size of the stack is ->"<<" "<<s.size()<<endl;
    
    return 0;
}