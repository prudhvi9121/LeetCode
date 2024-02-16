class Solution {
public:
int dp[10005];
    int fun(vector<int>& nums,int n,int i){
        if(i==(n-1)) return 0;
        if(dp[i]!=-1)return dp[i];
        int pick=1e9;
        for(int j=i+1;j<=min(i+nums[i],n-1);j++){
            pick=min(pick,1+fun(nums,n,j));
        }
        return dp[i]=pick;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,nums.size(),0);
    }
};