class Solution {
public:
    int maxGold;
    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& visited, int currentGold) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j]) {
            maxGold = max(maxGold, currentGold);
            return;
        }
        visited[i][j] = 1;
        currentGold += grid[i][j];
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto& dir : directions) {
            int ni = i + dir.first;
            int nj = j + dir.second;
            dfs(grid, ni, nj, visited, currentGold);
        }
        visited[i][j] = 0; 
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        maxGold = 0;
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] != 0) {
                    dfs(grid, i, j, visited, 0);
                }
            }
        }
        return maxGold;
    }
};