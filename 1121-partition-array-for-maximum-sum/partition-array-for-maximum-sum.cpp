class Solution {
public:
int dp[1005];
int fun(vector<int>&arr,int k,int i){
    if(i==arr.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int res=INT_MIN;
    int ans=INT_MIN;
    for(int jj=0;jj<k;jj++){
        if(i+jj<=arr.size()-1){
            ans=max(ans,arr[i+jj]);
           // cout<<i<<" "<<i+jj<<" "<<len<<endl;
            res=max(res,((jj+1)*ans+fun(arr,k,i+jj+1)));
        }
    }
    return dp[i]=res;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        return fun(arr,k,0);
    }
};