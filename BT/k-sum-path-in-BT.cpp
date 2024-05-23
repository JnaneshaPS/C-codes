//k sum path in binary tree



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


class Solution {
public:
    void solve(Node* root, int k, int &count, vector<int> path) {
        if (root == NULL)
            return NULL;

        //push the element to vector and store there
           path.push_back(root->data);

        //transverse in the left path
        solve(root->left,k,count,path);
         //transverse in the right part
       solve(root->right,k,count,path);

      int size=path.size();
       int sum=0;
     for(int i=size;i>0;i--)
      {
          sum=sum+path[i];
          if(k==sum)
          {
           count++;
          }
       return count;
    }
     path.pop_back();
    }
    int sumK(Node* root, int k) {
         vector<int> path;          
        int count = 0;
        solve(root, k, count,path); // Call the recursive function
        
    }
};
