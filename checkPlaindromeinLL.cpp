//checking th egiven linked list is a palindrom or not

#include <iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        }
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed and and memory is freed"<<endl;
    }
};

bool checkPalindrome(vector<int> arr)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool ispalindrome(Node* head)
{
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->data;
    }
    return checkPalindrome(arr); 
}

int main()
{
   

    return 0;
}

