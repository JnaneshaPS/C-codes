void dfsUtil(int node, vector<int> adj[], vector<bool> &visited, vector<int> &dfs) {
    visited[node] = true;
    dfs.push_back(node);

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, adj, visited, dfs);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> dfs;  // To store the DFS traversal
    vector<bool> visited(V, false);  // To keep track of visited nodes

    // Assuming DFS starts from vertex 0
    dfsUtil(0, adj, visited, dfs);

    return dfs;
}
