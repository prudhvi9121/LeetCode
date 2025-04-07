class Solution {
public:
    void find_path(vector<vector<char>>&grid,int row,int col, int i, int j){
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]=='0' || grid[i][j]=='2') return ;
        grid[i][j]='2';
        find_path(grid,row,col,i+1,j);
        find_path(grid,row,col,i,j+1);
        find_path(grid,row,col,i,j-1);
        find_path(grid,row,col,i-1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int res = 0;
        //vector<vector<int>>vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == '1') {
                    find_path(grid, row, col, i, j);
                    res++;
                }
            }
        }
        return res;
    }
};