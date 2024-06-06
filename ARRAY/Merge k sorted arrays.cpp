class node {
public:
    int data;
    int i;
    int j;

    node(int data, int row, int col) {
        this->data = data;
        this->i = row;
        this->j = col;
    }
};

class compare {
public:
    bool operator()(node *a, node *b) {
        return a->data > b->data;
    }
};

class Solution {
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        priority_queue<node*, vector<node*>, compare> minHeap;

        // Push the first element of each array into the minHeap
        for (int i = 0; i < K; i++) {
            node* temp = new node(arr[i][0], i, 0);
            minHeap.push(temp);
        }

        vector<int> ans;

        while (!minHeap.empty()) {
            node* temp = minHeap.top();
            ans.push_back(temp->data);
            minHeap.pop();

            int i = temp->i;
            int j = temp->j;

            // If there is a next element in the same row, push it into the heap
            if (j + 1 < arr[i].size()) {
                node *next = new node(arr[i][j + 1], i, j + 1);
                minHeap.push(next);
            }

            // Free the memory of the node
            delete temp;
        }

        return ans;
    }
};
