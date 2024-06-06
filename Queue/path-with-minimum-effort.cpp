int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // Edge case where grid is empty
        if (rows == 0 || columns == 0) return 0;
        
        vector<vector<int>> effort(rows, vector<int>(columns, INT_MAX));
        effort[0][0] = 0;

        // Min-heap to store {effort, row, col}
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, 0, 0}); // {effort, row, col}
        
        // Directions array to move in 4 possible directions
        vector<int> dir = {-1, 0, 1, 0, -1};

        while (!pq.empty()) {
            vector<int> top = pq.top();
            pq.pop();

            int currentEffort = top[0];
            int row = top[1];
            int col = top[2];

            // If we reach the bottom-right cell, return the effort
            if (row == rows - 1 && col == columns - 1) {
                return currentEffort;
            }

            // Explore the neighbors
            for (int i = 0; i < 4; ++i) {
                int newRow = row + dir[i];
                int newCol = col + dir[i + 1];

                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < columns) {
                    int newEffort = max(currentEffort, abs(heights[newRow][newCol] - heights[row][col]));

                    if (newEffort < effort[newRow][newCol]) {
                        effort[newRow][newCol] = newEffort;
                        pq.push({newEffort, newRow, newCol});
                    }
                }
            }
        }

        return 0; // This line should never be reached
    }
