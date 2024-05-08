void dfs(Node* node, vector<int>& path, vector<vector<int>>& result) {
    // Base case: if the node is null, return
    if (node == nullptr)
        return;
    
    // Add the current node's value to the path
    path.push_back(node->data);
    
    // If it's a leaf node, add the current path to the result
    if (node->left == nullptr && node->right == nullptr) {
        result.push_back(path);
    } else {
        // Otherwise, recursively explore left and right subtrees
        dfs(node->left, path, result);
        dfs(node->right, path, result);
    }
    
    // Backtrack: remove the current node's value from the path
    path.pop_back();
}

vector<vector<int>> Paths(Node* root) {
    vector<vector<int>> result;
    vector<int> path;
    dfs(root, path, result);
    return result;
}
