class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN,temp_sum=0;
        int i=0,n=nums.size();
        while(i<n){
            temp_sum+=nums[i++];
            if(temp_sum<0)temp_sum=0;
            res=max(res,temp_sum);
        }
        if(res==0) return *max_element(nums.begin(),nums.end());
        return res;
    }
};