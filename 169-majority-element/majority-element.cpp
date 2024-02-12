class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size(),res=nums[0];
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
                int k=mp[nums[i]];
                if(2*k>n){
                    // cout<<k<<endl;
                    n=2*k;
                    res=nums[i];
                }
            }
            else{
                mp.insert({nums[i],1});
            }
        }
        return res;
    }
};