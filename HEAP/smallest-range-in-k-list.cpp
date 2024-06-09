class Solution{
    public:
     class node {
    public:
        int data;
        int row;
        int col;

        node(int value, int r, int c) {
            data = value;
            row = r;
            col = c;
        }
    };

    class compare {
    public:
        bool operator()(node* a, node* b) {
            return a->data > b->data;
        }
    };

    pair<int, int> findSmallestRange(int arr[][N], int n, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        priority_queue<node*, vector<node*>, compare> minHeap;

        for (int i = 0; i < k; i++) {
            int element = arr[i][0];
            mini = min(mini, element);
            maxi = max(maxi, element);
            minHeap.push(new node(element, i, 0));
        }

        int start = mini;int end = maxi;

        while (!minHeap.empty()) {
            node* temp = minHeap.top();
            minHeap.pop();

            mini = temp->data;

            if (maxi - mini < end - start) {
                start = mini;
                end = maxi;
            }

            if (temp->col + 1 < n) {
                maxi = max(maxi, arr[temp->row][temp->col + 1]);
                minHeap.push(new node(arr[temp->row][temp->col + 1], temp->row, temp->col + 1));
            } else {
                break;
            }
        }

      return {start,end};
    }
};
