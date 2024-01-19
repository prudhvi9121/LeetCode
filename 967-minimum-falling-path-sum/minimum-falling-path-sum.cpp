class Solution {
public:
    int mini = INT_MAX;

    void fallingsum(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j, int n, int sum) {
        if (i == n - 1) {
            mini = min(mini, sum);
            return;
        }

        if (dp[i][j] <= sum) {
            // If the current DP value is less than or equal to the current sum, return
            return;
        }

        // Update the DP value at the current position
        dp[i][j] = sum;

        if (i < n - 1) {
            if (j == 0) {
                fallingsum(matrix, dp, i + 1, j, n, sum + matrix[i + 1][j]);
                fallingsum(matrix, dp, i + 1, j + 1, n, sum + matrix[i + 1][j + 1]);
            } else if (j == n - 1) {
                fallingsum(matrix, dp, i + 1, j, n, sum + matrix[i + 1][j]);
                fallingsum(matrix, dp, i + 1, j - 1, n, sum + matrix[i + 1][j - 1]);
            } else {
                fallingsum(matrix, dp, i + 1, j, n, sum + matrix[i + 1][j]);
                fallingsum(matrix, dp, i + 1, j - 1, n, sum + matrix[i + 1][j - 1]);
                fallingsum(matrix, dp, i + 1, j + 1, n, sum + matrix[i + 1][j + 1]);
            }
        }
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < n; ++i) {
            fallingsum(matrix, dp, 0, i, n, matrix[0][i]);
        }

        return mini;
    }
};