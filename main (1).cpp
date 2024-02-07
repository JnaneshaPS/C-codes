#include<iostream>
#include<queue>
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

int inorder(node* root,int cnt)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left,cnt);
    
    if(root->left==NULL&&root->right==NULL)
    {
        cnt++;
    }
    inorder(root->right,cnt);
}

int main()
{
    int cnt=0;
    node* root=NULL;
    inorder(root,cnt);
    return 0;
}