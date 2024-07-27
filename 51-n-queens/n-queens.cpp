class Solution {
public:
    vector<vector<string>>ans;
    bool possible(int row,int col, vector<string> &mat,int n){
        for(int i=0;i<=col;i++){
            if(mat[row][i]=='Q') return 0;
        }
        int i=row,j=col;
        
        while(i>=0 && j>=0){
            if(mat[i][j]=='Q') return 0;
            i--;
            j--;
        }
        i=row;
        j=col;
        
        while(i<n && j>=0){
            if(mat[i++][j--]=='Q') return 0;
        }
        return 1;
    }
    void solve(vector<string> &matrix,int n,int col){
        if(col == n){
            ans.push_back(matrix);
            return ;
        }
        for(int row=0;row<n;row++){
            if(possible(row,col,matrix,n)){
                matrix[row][col]='Q';
                solve(matrix,n,col+1);
                matrix[row][col]='.';
            }
          
        }
    }
    vector<vector<string>> solveNQueens(int n) {
    
        vector<string> matrix;
        string samp(n,'.');
        for(int i=0;i<n;i++){
            matrix.push_back(samp);
        }
        solve(matrix,n,0);
        return ans;
    }
};