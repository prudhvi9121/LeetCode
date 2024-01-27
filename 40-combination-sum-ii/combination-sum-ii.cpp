class Solution {
public:
    set<vector<int>> res;
    void combo(int i,vector<int>&cand,int target,vector<int>& samp){
        if(target==0){
           // sort(samp.begin(),samp.end());
            res.insert(samp);
            return ;
        }
         if(target<0 or i>=cand.size()) return ;
        if(cand[i]<=target){
            samp.push_back(cand[i]);
            combo(i+1,cand,target-cand[i],samp);
            samp.pop_back();
            //combo(i+1,cand,target,samp);
        }
        int j=i+1;
        while(j<cand.size() && cand[j]==cand[j-1]) j++;
        combo(j,cand,target,samp);
       // samp.pop_back();
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>samp;
       // return {{}};
        sort(candidates.begin(),candidates.end());
        combo(0,candidates,target,samp);
        vector<vector<int>>res1(res.begin(),res.end());
        return res1;
    }
};