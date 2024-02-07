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

node* buildtree(node* root)
{
    cout<<"enter the data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"enter the data for left tree"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the for insrting in right"<<endl;
    root->right=buildtree(root->right);
    return root;
}

void levelorderTransversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        
        if(temp==NULL)//old level is treansversed
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

void inorder(node* root)
{
    //base case
    if(root==NULL)
    {
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void preorder(node* root)
{
    //base case
    if(root==NULL)
    {
    return;
}
cout<<root->data<<" ";
inorder(root->left);
inorder(root->right);
}

void preorder(node* root)
{
    //base case
    if(root==NULL)
    {
    return;
}

inorder(root->left);
inorder(root->right);
cout<<root->data<<" ";
}

void buildFromLevelOrdertree(node* root)
{
    queue<node*> q;
    cout<<"enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        
        cout<<"enter left node for: "<<temp->data<<endl;
        int leftData;
        q.push(temp->left);
        
        if(leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"enter right node for: "<<temp->data<<endl;
        int rightData;
        q.push(temp->right);
        
        if(rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    
    node* root=NULL;
    
    //creating a tree
    root=buildtree(root);
    
    //levelorderTransversal
    levelorderTransversal(root);
    
    //inorder transversal
    cout<<"inorder transversal is ";
    inorder(root);
    
    //postorder transversal
    cout<<"postorder is :";
    postorder(root);
    
    //preorder transversal
    cout<<"pre-order is ";
    preorder(root);
    
    return 0;
}