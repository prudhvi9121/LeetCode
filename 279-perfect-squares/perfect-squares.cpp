class Solution {
public:
    vector<vector<int>>dp;
    int sqq(int n,int i){
        if(n==0) return 0;
        if(i*i>n) return 1e8;
        if(dp[i][n]!=-1) return dp[i][n];
        int pick=0;
        if((i*i)<=n){
            pick=1+sqq(n-(i*i),i);
        }
        int nopick=0+sqq(n,i+1);
        return dp[i][n]=min(pick,nopick);
    }
    int numSquares(int n) {
        int m = sqrt(n) + 1;
        dp.resize(m,vector<int>(n + 1, -1));
        int ans=sqq(n,1);
        return ans;
    }
};