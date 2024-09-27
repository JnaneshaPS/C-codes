//Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree
//Input: nums = [-10,-3,0,5,9]
//Output: [0,-3,9,-10,null,5]
//Explanation: [0,-10,5,null,-3,null,9] is also accepted
//Input: nums = [1,3]
//Output: [3,1]
//Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.

struct TreeNode{
        int val;
       TreeNode *left;
      TreeNode *right;
};

class Solution{
TreeNode *solve(vector<int> &nums,int start,int end)
{
              if(start>end)
{
 return NULL
   }

    int mid=start+(end-start);
   TreeNode *root=new TreeNode(nums[mid]);

root->left=solve(nums,start,mid-1);
 root->right=solve(nums,mid+1,end);

return root;
}

TreeNode *SortedArrayToBST(vector<int> &nums)
{
             return solve(nums,0,nums.size()-1);
}
};
