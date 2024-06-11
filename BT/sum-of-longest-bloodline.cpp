//sum of the longest bloodline of a tree(sum of the root nodes from longest path)


#include <iostream>

class node{
    int data;
    node* right;
    node* left;
    
    node(int data)
    {
        this->data=data;
        this->rigth=NULL;
        this->left=NULL;
        
    }
};
    
    void solve(node* root,int len,int maaxlen,int sum,int maxsum)
    {
        //base case
        if(root==NULL)
        {
            if(len>maaxlen)
            {
                maaxlen=len;
                maxsum=sum;
            }
            if(len==maaxlen)
            {
                maxsum=max(sum,maxsum);
            }
        }
        solve(root->right,len,maaxlen,sum,maxsum);
        solve(root->left,len,maaxlen,sum,maxsum);
    }
    
    int SumOfLongestPath(node* root)
    {
        int len=0;
        int maaxlen=0;
        
        int sum=0;
        int maxsum=INT_MIN;
        
        solve(root,len,maaxlen,sum,maxsum);
        return maxsum;
    }


int main()
{
    std::cout<<"Hello World";

    return 0;
}
