//boundry transversal in binary tree

#include <stdio.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

int transversal(node* root,vector<int> ans)
{
    //base case
    if((root==NULL)||(root->left==NULL)&&(root->right==NULL))
    {
        return ans;
    }
    
    ans.push_back(root->data);
    
    //transverse left part
    if(root->left)
    transversal(root->left,ans);
    else
    transversal(root->right,ans);
    
}

void transversalRight(node* root,vector<int> ans)
{
    //base case
     if((root==NULL)||(root->left==NULL)&&(root->right==NULL))
    {
        return ;
    }
    
    if(root->right)
    transversalRight(root->right,ans);
    else
    transversalRight(root->right,ans);
    
    //returned again 
    ans.push_back(root->data);
    
    
}

void transversalLeaf(node* root,vector<int> &ans)
{
    //base case
    if(root==NULL)
    return;
    
    if(root->left==NULL&&root->right==NULL)
    {
        ans.push_back(root->data);
        return;
    }
    
    transversalLeaf(root->left,ans); 
    transversalLeaf(root->right,ans);
    
    
}

vector<int> boundry(node* root)
{
    vector<int> ans;
    if(root==NULL)
    return ans;
    
    ans.push_back(root->data);
    
    //left part print ans store
    transversal(root->left,ans);
    
    //transversal leaf nodes
    
    //left subtree
    transversalLeaf(root->left,ans);
    
    //transvesal 
    transversalLeaf(root->right,ans);
    
    //right part transversal
    transversalRight(root->right,ans);
    
    return ans;
}

int main()
{
node* root=NULL;
boundry(root);
    return 0;
}
