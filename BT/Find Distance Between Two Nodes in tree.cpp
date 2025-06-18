
class Node{
   public:
        int data;
        Node left,*right;
    Node(int val){
     int data=val;
    left=NULL;
     right=NULL;
    }
};

int findleve(Node* root,int k,int level)
{
     if(root==nullptr)
{
   return -1;
}

if(root->data==k)
{
   return level;
}

Node* left=findlevel(root->left,k,level+1);

if(left!=-1)
{
  return left;
}else{
   return findlevel(root->right,k,level+1);
}
}

int findLCA(Node* root,int a,int b,int d1,int d2,int &dist,int lvl)
{
    if(root==nullptr)
{
   return -1;
}
if(root->data==a){
   d1=lvl;
   return root;
}

if(root->data==b){
 d2=lvl;
  return root;
}

Node* left=findLCA(root->left,a,b,d1,d2,dist,lvl+1);

Node* right=findLCA(root->right,a,b,d1,d2,dist,lvl+1);

if(left!=nullptr&&right!=nullptr)
{
   dist=d1+d2-2*lvl;
}

if(left!=nullptr)
{  
  return left;
}
else{
  return right;
}

}

find Distance(Node* root,int a,int b)
{
int d1=-1,d2=-1,dist;
  Node* lca=findLCA(root,a,b,d1,d2,dist,1);

if (d1 != -1 && d2 != -1) {
        return dist;
    }

    if (d1 != -1) {
        dist = findLevel(lca, b, 0);
        return dist;
    }

    if (d2 != -1) {
        dist = findLevel(lca, a, 0);
        return dist;
    }

    return -1;
}
