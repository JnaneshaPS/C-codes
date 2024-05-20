#include<iostream>
#include<vector>

using namespace std;

class node{
   public:
   int data;
   node *right;
   node *left;

   node(int val)
   {
      this->data = val;
      this->right = NULL; 
      this->left = NULL;
   }
};

int inorder(node *root,vector<int> in)
{
   if(root == NULL)
   {
      return 0;
   }
   inorder(root->left,in);
   in.push_back(root->data);
   inorder(root->right,in);
}

int sumOfTwo(node *root,int target)
{
   vector<int> in;
   int i=0,j=in.size()-1;

   while(i<j)
   {
      int sum = in[i]+in[j];

      if(sum==target)
      {
         return 1;
      }
      else if(sum>target)
      {
j--;
      }
      else{
         i++;
      }
   }
   return 0;
}
int main()
{
   node *root = new node(5);
   root->left = new node(3);
   root->right = new node(7);
   root->left->left = new node(2);
   root->left->right = new node(4);
   root->right->left = new node(6);
   root->right->right = new node(8);

   int target = 10;
   vector<int> in;
   inorder(root,in);
   cout<<sumOfTwo(root,target);
   return 0;
}  
