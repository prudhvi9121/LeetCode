class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int k:nums1) mp[k]++;
        vector<int>res;
        for(int p:nums2){
            if(mp[p]>0){
                res.push_back(p);
                mp[p]-=1;
            }
        }
        return res;
    }
};