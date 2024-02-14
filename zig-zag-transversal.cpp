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

vector<int> zigzagTransversal(node* root)
{
    vector<int> ans;
    if(root==NULL)
         return ans;
     
     queue<node> q;
     q.push(root);
     
     bool leftToRight=true;
     
     while(!q.empty())
     {
         int size=q.size();
         vector<int> ans(size);
         //level process
         for(int i=0;i<size;i++)
         {
             node* frontNode=q.front();
             q.pop();
             
             int index=leftToRight?i:size-i-1;
             ans[index]=frontNode->data;
             
             if(frontNode->left)
               q.push(frontNode->left);
               
               if(frontNode->right)
               q.push(frontNode->right);
         }
         leftToRight=!leftToRight;
         
         for(auto i:ans){
             result.push_back(i);
         }
     }
     return result;
    
}

int main(node* r1,node* r2)
{
   
}
    node* root1=NULL;
    node* root2=NULL;
    
    isIdentical(root1,root2);
    
    return 0;
}
