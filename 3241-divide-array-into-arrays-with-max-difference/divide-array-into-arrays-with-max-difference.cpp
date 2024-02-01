class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=nums.size()-1;i>=2;i-=3){
             if(nums[i]-nums[i-1]<=k and nums[i-1]-nums[i-2]<=k and nums[i]-nums[i-2]<=k){
                 res.push_back({nums[i],nums[i-1],nums[i-2]});
             }
             else return {};
        }
        return res;
    }
};