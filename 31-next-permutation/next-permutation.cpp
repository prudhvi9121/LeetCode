class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        cout<<ind<<endl;
        if(ind == -1) {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>=ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        for(auto it:nums) cout<<it<<endl;
        reverse(nums.begin()+ind+1,nums.end());
    }
};