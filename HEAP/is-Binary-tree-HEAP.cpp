class Solution {
  public:
  
  int countNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }

    int ans = 1 + countNodes(root->left) + countNodes(root->right);
    return ans;
}

// Function to check if the binary tree is a complete binary tree
bool isCBT(struct Node* root, int index, int nodeCount) {
    if (root == NULL)
        return true;

    if (index >= nodeCount)
        return false;

    bool left = isCBT(root->left, 2 * index + 1, nodeCount);
    bool right = isCBT(root->right, 2 * index + 2, nodeCount);
    return (left && right);
}

// Function to check if the binary tree satisfies the max-heap property
bool isMAXHEAP(struct Node* root) {
    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->right == NULL)
        return (root->data > root->left->data);

    bool left = isMAXHEAP(root->left);
    bool right = isMAXHEAP(root->right);

    return (left && right && root->data > root->left->data && root->data > root->right->data);
}

// Function to check if the binary tree is a heap
bool isHeap(struct Node* tree) {
    int index = 0;
    int totalCount = countNodes(tree);

    if (isCBT(tree, index, totalCount) && isMAXHEAP(tree)) {
        return true;
    } else {
        return false;
    }
}
};
