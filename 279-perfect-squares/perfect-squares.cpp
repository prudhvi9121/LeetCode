class Solution {
public:
    int dp[10005];
    int sqq(int n){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int res=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int pick=1+sqq(n-(i*i));
            res=min(res,pick);
        }
        return dp[n]=res;
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=sqq(n);
        return ans;
    }
};