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

pair<bool,int> issumTreefast(node* root)
{
    //base case
    if(root==NULL)
    {
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    
    if(root->left==NULL&&root->right==NULL)
    {
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }
    
    pair<bool,int> LeftAns=issumTreefast(root->left);
    pair<bool,int> rigthAns=issumTreefast(root->right);
    
    bool left=LeftAns.first;
    bool right=rigthAns.first;
     
     bool cond=root->data==LeftAns.second+rigthAns.second ;
     
     pair<bool,int> ans;
     
     if(left&&right&&cond)
     {
         ans.first=true;
         ans.second=root->data;
     }
     else{
         ans.first=false;
     }
     }
}

bool sum()
{
    return issumTreefast(root).first;
}
int main(node* r1,node* r2)
{
   
}
    node* root1=NULL;
    node* root2=NULL;
    
    isIdentical(root1,root2);
    
    return 0;
}
