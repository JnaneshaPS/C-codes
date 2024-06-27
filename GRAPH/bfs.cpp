 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
     vector<int> bfs;  // To store the BFS traversal
    vector<bool> visited(V, false);  // To keep track of visited nodes

    queue<int> q;
    q.push(0);  // Assuming BFS starts from vertex 0
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return bfs;
    }
