class Solution {
public:
    vector<vector<int>>res;
    void combes(vector<int>& cand, int target,vector<int>samp,int i){
        // cout<<target<<endl;
        // for(auto it:samp) cout<<it<<" - ";
        // cout<<endl;
        if(target<0 or i>=cand.size()) return;
        if(target==0){
            //cout
            res.push_back(samp);
            return ;
        }
        if(cand[i]<=target){
            samp.push_back(cand[i]);
            combes(cand,target-cand[i],samp,i);
            samp.pop_back();
        }
        
        combes(cand,target,samp,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<int>samp;
        combes(cand,target,samp,0);
        return res;
    }
};