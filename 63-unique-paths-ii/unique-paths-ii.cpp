class Solution {
public:
    int row,col;
    int dp[101][101];
    int paths(vector<vector<int>>& grid,int i,int j){
        if(i==row-1 && j==col-1 && grid[i][j]==0) return 1;
        if(i>=row || j>=col || grid[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int p1=paths(grid,i+1,j);
        int p2=paths(grid,i,j+1);
        return dp[i][j]=p1+p2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        row=obstacleGrid.size();
        col=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return paths(obstacleGrid,0,0);
    }
};