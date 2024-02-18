class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])continue;
            if((nums[i]+1==nums[i+1])){
                cnt++;
            }
            else{
                maxi=max(cnt,maxi);
                cnt=1;
            }
        }
        maxi=max(cnt,maxi);
        return maxi;
    }
};