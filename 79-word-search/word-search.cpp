class Solution {
public:
    bool can_find(vector<vector<char>>& board, int i, int j, string word,
                  int k) {
        if (k == word.size())
            return true;
        if (i < 0 || j < 0 || j >= board[0].size() || i >= board.size() || word[k] != board[i][j])
            return false;
        char temp = board[i][j];
        board[i][j] = '-';
        bool will = can_find(board, i, j - 1, word, k + 1) ||
                    can_find(board, i, j + 1, word, k + 1) ||
                    can_find(board, i - 1, j, word, k + 1) ||
                    can_find(board, i + 1, j, word, k + 1);
        board[i][j] = temp;
        return will;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == word[0] && can_find(board, i, j, word, 0)) return true;
            }
        }
        return false;
    }
};