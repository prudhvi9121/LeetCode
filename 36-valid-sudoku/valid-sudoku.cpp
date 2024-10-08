class Solution {
public:
    bool isValid(int row,int col,char c,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[row][i]==c) return 0;
            if(board[i][col]==c) return 0;
            int subrow = 3*(row/3) + (i/3);
            int subcol = 3*(col/3) + (i%3);
            if(board[subrow][subcol]==c)return 0;
        }
        return true;
    }
    bool valid(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
               if (board[i][j] != '.') {
                    char c = board[i][j];
                    board[i][j] = '.';
                    if (!isValid(i, j, c, board)) return false;
                    board[i][j] = c;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
         return valid(board);
         for(auto it:board){
            for(auto k:it){
                if(k=='.') return 0;
            }
         }
         return 1;
    }
};