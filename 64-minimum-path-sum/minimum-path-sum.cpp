class Solution {
public:
    int row,col;
    int dp[210][210];
    int find_mini(vector<vector<int>>& grid,int i,int j){
        if(i==row-1 and j==col-1) {
            // cout<<grid[i][j]<<endl;
            return grid[i][j];
        }
        if(i>=row or j>=col) return 100000;

        if(dp[i][j]!=-1) return dp[i][j];

        int right= grid[i][j]+find_mini(grid,i,j+1);
        int down= grid[i][j]+find_mini(grid,i+1,j);
        return dp[i][j]=min(right,down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        row=grid.size();
        col=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return find_mini(grid,0,0);
    }
};