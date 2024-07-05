static bool cmp(vector<int> &a, vector<int> &b) {
        return a[2] < b[2];
    }
	
    // Function to initialize the parent and rank vectors
    void makeSet(vector<int> &parent, vector<int> &rank, int n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    // Function to find the parent of a node with path compression
    int findParent(vector<int> &parent, int node) {
        if (parent[node] == node) {
            return node;
        }
        return parent[node] = findParent(parent, parent[node]);
    }

    // Function to union two sets by rank
    void unionSet(int u, int v, vector<int> &parent, vector<int> &rank) {
        u = findParent(parent, u);
        v = findParent(parent, v);
        
        if (rank[u] < rank[v]) {
            parent[u] = v;
        } else if (rank[v] < rank[u]) {
            parent[v] = u;
        } else {
            parent[v] = u;
            rank[u]++;
        }
    }

    // Function to find the sum of weights of edges of the Minimum Spanning Tree
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<vector<int>> edges;

        // Convert adjacency list to edge list
        for (int u = 0; u < V; u++) {
            for (auto &edge : adj[u]) {
                int v = edge[0];
                int wt = edge[1];
                if (u < v) { // To avoid duplicating edges
                    edges.push_back({u, v, wt});
                }
            }
        }

        // Sort edges by their weight
        sort(edges.begin(), edges.end(), Solution::cmp);

        vector<int> parent(V);
        vector<int> rank(V);
        makeSet(parent, rank, V);

        int minWeight = 0;

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            if (findParent(parent, u) != findParent(parent, v)) {
                minWeight += wt;
                unionSet(u, v, parent, rank);
            }
        }

        return minWeight;
    }
