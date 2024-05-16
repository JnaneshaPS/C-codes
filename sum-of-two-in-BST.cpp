void inorder(node *root,vector<int> in)
{
   if(root == NULL)
   {
      return ;
   }
   inorder(root->left,in);
   in.push_back(root->data);
   inorder(root->right,in);
}

bool sumOfTwo(node *root,int target)
{
   vector<int> in;
   int i=0,j=in.size()-1;

   while(i<j)
   {
      int sum = in[i]+in[j];

      if(sum==target)
     
         return true;
      else if(sum>target)
          j--;
      else
         i++;
   }
   return false;
}
