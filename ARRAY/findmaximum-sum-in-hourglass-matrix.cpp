  int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
         int max_sum = -1; // Initialize maximum sum with -1

    // Iterate through each cell in the matrix
    for (int i = 0; i <= n - 3; ++i) { // Rows
        for (int j = 0; j <= m - 3; ++j) { // Columns
            // Calculate sum of hourglass
            int hourglass_sum = (
                mat[i][j] + mat[i][j + 1] + mat[i][j + 2] +
                mat[i + 1][j + 1] +
                mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2]
            );
            // Update maximum sum
            max_sum = std::max(max_sum, hourglass_sum);
        }
    }

    return max_sum;
    }
