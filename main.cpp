//finding the height of the binary-tree

#include<iostream>

using namespace std;

//finding the hight through recursion

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

int height(node* root)
{
    ///base case
    if(root==NULL)
    {
        return 0;
    }
    
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
int main()
{
    node* root=NULL;
    height(root);
    return 0;
}