

#include <iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    
    node(int value)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


void levelOrder(node* root)
{
queue<node*> q;
q.push(root);
q.push(NULL);

while(!q.empty())
{
    node* temp=q.front();
    q.pop();
    
    if(temp==NULL)
    {
        cout<<endl;
        
        if(!q.empty())
        {
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
}


node* insertToBST(node* root,int d)
{
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    
    if(root->data>d)
    {
           root->left= insertToBST(root->left,d);
    }
    else
    {
        root->right=insertToBST(root->right,d);  
    }
    return root;
}

void takeInput(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertToBST(root,data);
        cin>>data;
    }
}

int main()
{
    node *root=NULL;
    cout<<"enter the data to create BST"<<endl;
    takeInput(root);

      cout<<"printing the BST"<<endl;
      levelOrder(root);
    return 0;
}
