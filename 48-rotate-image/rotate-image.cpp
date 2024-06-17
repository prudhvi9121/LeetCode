class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) swap(matrix[i][j], matrix[j][i]);
            for (int k1 = 0, k2 = n - 1; k1 < (n / 2); k1++, k2--) swap(matrix[i][k1], matrix[i][k2]);
        }
    }
};