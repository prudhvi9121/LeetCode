class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int s=nums.size()/3;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]!=-1 && mp[nums[i]]>s){
                res.push_back(nums[i]);
                mp[nums[i]]=-1;
            }
        }
        return res;
    }
};