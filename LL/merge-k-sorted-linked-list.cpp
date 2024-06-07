lass compare {
    public:
        bool operator()(Node* a, Node* b) {
            return a->data > b->data;
        }
    };

    // Function to merge K sorted linked lists.
    Node* mergeKLists(Node* arr[], int K) {
        // Your code here
        priority_queue<Node*, vector<Node*>, compare> minHeap;

        if (K == 0) {
            return NULL;
        }

        // Push the first node of each list into the minHeap
        for (int i = 0; i < K; i++) {
            if (arr[i] != NULL) {
                minHeap.push(arr[i]);
            }
        }

        Node* head = NULL;
        Node* tail = NULL;

        // Process the heap until it's empty
        while (!minHeap.empty()) {
            Node* top = minHeap.top();
            minHeap.pop();

            if (top->next != NULL) {
                minHeap.push(top->next);
            }

            if (head == NULL) {
                head = top;
                tail = top;
            } else {
                tail->next = top;
                tail = top;  // correctly update the tail pointer
            }
        }

        return head;
    }
