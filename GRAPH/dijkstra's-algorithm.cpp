vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
    vector<int> dist(V, INT_MAX);
    set<pair<int, int>> st;

    dist[S] = 0;
    st.insert(make_pair(0, S));

    while (!st.empty()) {
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int node = top.second;

        // Remove the top record
        st.erase(st.begin());

        // Traverse all adjacent nodes
        for (auto neighbour : adj[node]) {
            int neighbourNode = neighbour[0];
            int edgeWeight = neighbour[1];

            if (nodeDistance + edgeWeight < dist[neighbourNode]) {
                auto record = st.find(make_pair(dist[neighbourNode], neighbourNode));

                // If the record is found, erase it
                if (record != st.end()) {
                    st.erase(record);
                }

                // Update the distance
                dist[neighbourNode] = nodeDistance + edgeWeight;

                // Insert the updated distance and node in the set
                st.insert(make_pair(dist[neighbourNode], neighbourNode));
            }
        }
    }

    return dist;
}
