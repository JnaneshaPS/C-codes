void findindex(int in[],int n,map<int,int> &nodeToIndex)
    {
        for(int i=0;i<n;i++)
        {
            nodeToIndex[in[i]]=i;
        }
    }

         Node* solve(int in[],int post[],int &index,int instart,int inend,int n,map<int,int> &nodeToIndex)
       {
           //base case
           if(index<0 || instart>inend)
           {
               return NULL;
           }
           
           int element=post[index--];
           Node* root=new Node(element);
           int position=nodeToIndex[element];
           
           root->right=solve(in,post,index,position+1,inend,n,nodeToIndex);
           root->left=solve(in,post,index,instart,position-1,n,nodeToIndex);
           
           
           return root;
       }
    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        map<int,int> nodeToIndex;
        int postOrderIndex=n-1;
        findindex(in,n,nodeToIndex);
        
        Node* ans=solve(in,post,postOrderIndex,0,n-1,n,nodeToIndex);
        return ans;
        
    }
