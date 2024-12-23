//Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.
//The distance between two adjacent cells is 1.

void bfs(vector<vector<int>>& mat, vector<vector<int>>& result) {
    int rows = mat.size();
    int cols = mat[0].size();
    queue<pair<int, int>> q;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (mat[r][c] == 0) {
                result[r][c] = 0; 
                q.push({r, c});  
            }
        }
    }

    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (auto [dx, dy] : directions) {
            int nx = x + dx;
            int ny = y + dy;

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                if (result[nx][ny] > result[x][y] + 1) {
                    result[nx][ny] = result[x][y] + 1; 
                    q.push({nx, ny});                 
                }
            }
        }
    }
}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<int>> res(r,vector<int>(c,INT_MAX));
   bfs(mat,res);
   return res;

    }
