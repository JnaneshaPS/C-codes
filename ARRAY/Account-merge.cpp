class Solution {
  public: class UnionFind {
    public:
        vector<int> parent;
        vector<int> rank;

        UnionFind(int n) : parent(n), rank(n, 0) {
            for (int i = 0; i < n; ++i) parent[i] = i;
        }

        int find(int x) {
            if (parent[x] != x) parent[x] = find(parent[x]); // Path compression
            return parent[x];
        }

        void unite(int x, int y) {
            int rootX = find(x);
            int rootY = find(y);
            if (rootX != rootY) {
                if (rank[rootX] > rank[rootY]) {
                    parent[rootY] = rootX;
                } else if (rank[rootX] < rank[rootY]) {
                    parent[rootX] = rootY;
                } else {
                    parent[rootY] = rootX;
                    ++rank[rootX];
                }
            }
        }
    };

    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        int n = accounts.size();
        UnionFind uf(n);
        unordered_map<string, int> emailToIndex;
        unordered_map<int, string> indexToName;

        for (int i = 0; i < n; ++i) {
            string name = accounts[i][0];
            for (int j = 1; j < accounts[i].size(); ++j) {
                string email = accounts[i][j];
                if (emailToIndex.find(email) == emailToIndex.end()) {
                    emailToIndex[email] = i;
                } else {
                    uf.unite(i, emailToIndex[email]);
                }
            }
            indexToName[i] = name;
        }

        unordered_map<int, vector<string>> rootToEmails;
        for (const auto& pair : emailToIndex) {
            int root = uf.find(pair.second);
            rootToEmails[root].push_back(pair.first);
        }

        vector<vector<string>> mergedAccounts;
        for (const auto& pair : rootToEmails) {
            int index = pair.first;
            vector<string> emails = pair.second;
            sort(emails.begin(), emails.end());
            vector<string> account = {indexToName[index]};
            account.insert(account.end(), emails.begin(), emails.end());
            mergedAccounts.push_back(account);
        }

        return mergedAccounts;
    }
   
};
