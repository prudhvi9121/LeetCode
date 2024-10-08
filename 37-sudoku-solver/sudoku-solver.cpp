class Solution {
public:
    bool isvalid(int i,int j,char c,vector<vector<char>> &board){
        for(int k=0;k<9;k++){
            if(board[k][j]==c) return false;
            if(board[i][k]==c) return false;
            int subgridRow = 3 * (i / 3) + k / 3;
            int subgridCol = 3 * (j / 3) + k % 3;
            if (board[subgridRow][subgridCol] == c) return false;

        }
        return true;
    }
    bool solvesudo(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(i,j,c,board)){
                            board[i][j]=c;
                        if(solvesudo(board)==true) return true;
                        else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solvesudo(board);
    }
};