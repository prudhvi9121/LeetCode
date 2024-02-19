class Solution {
public:
    int dp[10005][13];
    int coins_cc(vector<int>&coins,int amount,int n){
        if(amount==0) return 0;
        if(n<0) return 1e9;
        if(dp[amount][n]!=-1) return dp[amount][n];
        int pick=1e9; 
        if(coins[n]<=amount) pick=1+coins_cc(coins,amount-coins[n],n);
        int nopick=0+coins_cc(coins,amount,n-1);
        return dp[amount][n]=min(pick,nopick);
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        memset(dp,-1,sizeof(dp));
        int k= coins_cc(coins,amount,coins.size()-1);
        if(k==1e9) return -1;
        return k;
    }
};