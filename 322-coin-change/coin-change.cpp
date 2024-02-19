class Solution {
public:
    int dp[10005];
    int coins_cc(vector<int>&coins,int amount){
        if(amount==0) return 0;
        if(amount<0) return 1e9;
        if(dp[amount]!=-1) return dp[amount];
        int pick=1e9; 
        for(int i=coins.size()-1;i>=0;i--){
            if(coins[i]<=amount){
                pick=min(pick,1+coins_cc(coins,amount-coins[i]));
            } 
        }
        return dp[amount]=pick;
    }
    int coinChange(vector<int>& coins, int amount) {
         sort(coins.begin(),coins.end());
        memset(dp,-1,sizeof(dp));
        int k= coins_cc(coins,amount);
        if(k==1e9) return -1;
        return k;
    }
};