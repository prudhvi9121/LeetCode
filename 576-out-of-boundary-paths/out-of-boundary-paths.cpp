class Solution {
public:
    //long long res=0;
      long long mod = 1e9 + 7;

    long long paths(int m, int n, int maxMove, int startRow, int startCol, int cnt, vector<vector<vector<long long>>>& memo) {
        if (cnt > maxMove) return 0;
        if (startRow < 0 || startCol < 0 || startRow >= m || startCol >= n) return 1;
        if (memo[startRow][startCol][cnt] != -1) return memo[startRow][startCol][cnt];

        long long result = 0;
        result = (result + paths(m, n, maxMove, startRow, startCol + 1, cnt + 1, memo)) % mod;
        result = (result + paths(m, n, maxMove, startRow + 1, startCol, cnt + 1, memo)) % mod;
        result = (result + paths(m, n, maxMove, startRow - 1, startCol, cnt + 1, memo)) % mod;
        result = (result + paths(m, n, maxMove, startRow, startCol - 1, cnt + 1, memo)) % mod;

        memo[startRow][startCol][cnt] = result;
        return result;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<long long>>> memo(m, vector<vector<long long>>(n, vector<long long>(maxMove + 1, -1)));
        return paths(m,n,maxMove,startRow,startColumn,0,memo)%mod;
       
    }
};