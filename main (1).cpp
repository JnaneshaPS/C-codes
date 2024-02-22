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
    void solve(Node* root, int k, int &count, int sum, unordered_map<int, int> &prefixSums) {
        if (root == nullptr)
            return;

        // Update the current sum by adding the current node's value
        sum += root->data;

        // If the sum is equal to k, increment the count
        if (sum == k)
            count++;

        // If the difference (sum - k) exists in the prefix sums map, add its count to the total count
        if (prefixSums.find(sum - k) != prefixSums.end())
            count += prefixSums[sum - k];

        // Increment the count of the current sum in the prefix sums map
        prefixSums[sum]++;

        // Recursively traverse the left and right subtrees
        solve(root->left, k, count, sum, prefixSums);
        solve(root->right, k, count, sum, prefixSums);

        // Decrement the count of the current sum in the prefix sums map (backtracking)
        prefixSums[sum]--;
    }

    int sumK(Node* root, int k) {
        unordered_map<int, int> prefixSums; // Map to store prefix sums and their counts
        int count = 0; // Initialize count of paths with sum equal to k
        solve(root, k, count, 0, prefixSums); // Call the recursive function
        return count;
    }
};
