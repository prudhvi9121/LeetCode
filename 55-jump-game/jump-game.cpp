class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec(n,0);
        if(n==1) return 1;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==0 && flag<=i) return 0;
            else if(i+nums[i]<(n-1)){
                vec[i+nums[i]]=1;
                flag=max(flag,i+nums[i]);
            }
            else return 1;
        }
        return vec[n-1]==1;
    }
};