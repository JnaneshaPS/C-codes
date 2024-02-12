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

pair<int,int> diiameterFast(node* root)
{
    //base case
    if(root==NULL)
    {
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    
    pair <int,int> left=diiameterFast(root->left);
    pair<int,int> right=diiameterFast(root->right);
    
    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    
    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    
    return ans;
}
int diiameter(node* root)
{
    return diiameter(root).first;
}
int main()
{
    node* root=NULL;
    height(root);
    return 0;
}