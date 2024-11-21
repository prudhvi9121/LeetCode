class Solution {
public:
    int climbingStairs(vector<int>&cost,int ind,int dp[]){
        if(ind>=cost.size()-1){
            return 0;
        }
        if(dp[ind]!=-1) return dp[ind];
        int left = cost[ind] + climbingStairs(cost,ind+1,dp);
        int right = cost[ind+1] + climbingStairs(cost,ind+2,dp);
        return dp[ind]=min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();        
        int dp[n + 1];
        memset(dp, -1, sizeof(dp));
        return climbingStairs(cost,0,dp);
    }
};