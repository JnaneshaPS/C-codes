//check for the balanced tree

#include<iostream>

using namespace std;

class node{
    
    public:
    int data;
    node* left;
    node* right;
    
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

bool isIdentical(node* r1,node* r2)
{
    if(r1==NULL&&r2==NULL)
    {
    return true;
    }
    
    if(r1!=NULL&&r2==NULL)
    {
    return false;
    }
    
    if(r1==NULL&&r2!=NULL)
    {
    return false;
    }
    
    bool left=isIdentical(r1->left,r2->left);
    bool right=isIdentical(r1->right,r2->right);
    
    bool value=r1->data==r2->data;
    
    if(left&&right&&value)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}


int main()
{
    node* root1=NULL;
    node* root2=NULL;
    
    isIdentical(root1,root2);
    
    return 0;
}
