class Solution {
public:
    int row,col;
    int exist1(vector<vector<char>>& board,string word,int i,int j,int k){
         if (i < 0 || i >= row || j < 0 || j >= col || board[i][j] != word[k])
            return 0;
        if (k == word.size()-1)
            return 1;
        char temp=board[i][j];
        board[i][j] = ' ';
        int a1 = exist1(board,word,i+1,j,k+1);
        int a2 = exist1(board,word,i,j+1,k+1);
        int a3 = exist1(board,word,i-1,j,k+1);
        int a4 = exist1(board,word,i,j-1,k+1);
        board[i][j] = temp; 
        return a1 || a2 || a3 || a4;   
    }
    bool exist(vector<vector<char>>& board, string word) {
        row=board.size();
        col=board[0].size(); 
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (exist1(board,word,i,j,0)) return 1;
            }
        }
        return 0; 
    }
};