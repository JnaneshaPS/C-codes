//top view of the binary tree

class Solution {
public:
    // Function to return a list of nodes visible from the top view 
    // from left to right in Binary Tree.
    vector<int> topView(Node* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;

        map<int, int> topNode;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0)); // Using make_pair to initialize the queue

        while (!q.empty()) {
            Node* frontNode = q.front().first; // Extracting the first element of the pair
            int hd = q.front().second; // Extracting the second element of the pair
            q.pop();

            // Only insert the node's value if this is the first node we encounter at this horizontal distance (hd)
            if (topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode->data;

            // Enqueue left and right child if they exist
            if (frontNode->left)
                q.push(make_pair(frontNode->left, hd - 1));
            if (frontNode->right)
                q.push(make_pair(frontNode->right, hd + 1));
        }

        // Copying the values from the map to the vector
        for (const auto& it : topNode)
            ans.push_back(it.second);

        return ans;
    }
};
