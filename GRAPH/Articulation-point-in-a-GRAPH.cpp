#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>

using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer) {
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int children = 0;

    for (auto neighbour : adj[node]) {
        if (neighbour == parent)
            continue;
        
        if (!vis[neighbour]) {
            children++;
            dfs(neighbour, node, disc, low, vis, adj, ap, timer);
            low[node] = min(low[node], low[neighbour]);
            
            if (parent != -1 && low[neighbour] >= disc[node]) {
                ap[node] = true;
            }
        } else {
            low[node] = min(low[node], disc[neighbour]);
        }
    }
    
    if (parent == -1 && children > 1) {
        ap[node] = true;
    }
}

int main() {
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));
    
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    int timer = 0;
    unordered_map<int, bool> vis;
    vector<int> ap(n, 0);
    
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1, disc, low, vis, adj, ap, timer);
        }
    }
    
    cout << "Articulation points are as follows:" << endl;
    for (int i = 0; i < n; i++) {
        if (ap[i] != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
