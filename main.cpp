//lowest common ancestor in the binary tree



 #include <iostream.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            //base case
            if(root==NULL)
            {
                return NULL;
            }
            
            if(root->data==n1||root->data==n2)
            {
                return root;
            }
            
            Node* leftAns=LCA(root->left,n1,n2);
            Node* rightAns=LCA(root->right,n1,n2);
            
            if(leftAns!=NULL && rightAns!=NULL)
            {
                return root;
            }
            else if(leftAns==NULL&&rightAns!=NULL)
                return rightAns;
            
            else if(leftAns!=NULL && rightAns==NULL)
            return leftAns;
        
        else
            return NULL;
        
        }

};