class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&samp,vector<int>&cand,int tar,int i){
        if(tar==0){
            ans.push_back(samp);
            return ;
        }
        if(i>=cand.size() || tar<=0) return ;
        samp.push_back(cand[i]);
        solve(samp,cand,tar-cand[i],i+1);
        samp.pop_back();
        int j=i+1;
        while(j<cand.size() && cand[j]==cand[j-1]) j++;
        solve(samp,cand,tar,j);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>samp;
        solve(samp,candidates,target,0);
        return ans;
    }
};