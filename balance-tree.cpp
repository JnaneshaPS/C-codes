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
/*   this is code with O(n^2) time comlexity
bool isBalances(node* root)
{
    //base case
    if(root==NULL)
    {
        return true;
    }
    
    bool left=isBalances(root->left);
    bool right=isBalances(root->right);
    
    bool diff=abs(height(root->left)-height(root->right))<=1;
    
    if(left&&right&&root)
    {
        return 1;
    }
    
    else{
        return false;
    }
}
*/

//code with O(n) complexity
pair<bool,int> isBalancedFast(node* root)
{
    //base case
    if(root==NULL)
    {
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    
    pair<int,int> left=isBalancedFast(root->left);
    pair<int,int> right=isBalancedFast(root->right);
    
    bool leftAns=left.first;
    bool rightAns=right.first;
    
    bool diff=abs(left.second-right.second)<=1;
    
    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;
    
    if(leftAns&&rightAns&&diff)
    {
        ans.first=true;
    }
    else{
        ans.second=false;
    }
    return ans;
}



int main()
{
    node* root=NULL;
    height(root);
    return 0;
}