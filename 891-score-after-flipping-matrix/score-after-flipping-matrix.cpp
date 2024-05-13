class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size(),col = grid[0].size();
        for (int k = 0; k < row; k++) {
            if (!grid[k][0]) {
                for (int i = 0; i < col; i++)
                    grid[k][i] = grid[k][i] ^ 1;
            }
        }
        for (int i = 1; i < col; i++) {
            int c0 = 0, c1 = 0;
            for (int j = 0; j < row; j++) {
                if (grid[j][i])
                    c1++;
            }
            c0 = row - c1;
            if (c0 > c1) {
                for (int j = 0; j < row; j++) {
                    grid[j][i] = grid[j][i] ^ 1;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < row; i++) {
            int bit = 0;
            for (int j = 0; j < col; j++) {
                if (grid[i][j])
                    bit += (1 << (col - 1 - j));
            }
            res += bit;
        }
        return res;
    }
};