class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>&ans,vector<int>&nums,int i){
        res.push_back(ans);
        for(int ind = i; ind < nums.size(); ind++){
            if(i!=ind && nums[ind]==nums[ind-1]) continue;
            ans.push_back(nums[ind]);
            solve(ans,nums,ind+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        solve(ans,nums,0);
        return res;
    }
};