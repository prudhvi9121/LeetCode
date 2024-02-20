class Solution {
public:
    int dp[201][201];
    int totaltri(vector<vector<int>>& tri,int i,int j){
        if(i==tri.size()) return 0;
        if(i>tri.size() || j>tri[i].size()) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int st1=tri[i][j]+totaltri(tri,i+1,j);
        int st2=tri[i][j]+totaltri(tri,i+1,j+1);
        return dp[i][j]=min(st1,st2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return totaltri(triangle,0,0);
    }
};