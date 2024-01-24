//reverse the elements in the queue
#include<iostream>
#include<queue>
#include<stack>

using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    
    // Step 1: Pop the first k elements from the queue and push them into the stack
    for (int i = 0; i < k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    // Step 2: Fetch elements from the stack and push them back into the queue
    while (!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    // Step 3: Fetch the first (n-k) elements from the queue and push them back
    int t = q.size() - k;
    while (t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q; // The modified queue is returned
}
