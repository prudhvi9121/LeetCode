class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>vec{nums[0]};
        for(int i=1;i<nums.size();i++){
            if(nums[i]>vec[vec.size()-1]){
                vec.push_back(nums[i]);
            }
            else{
                int k=(lower_bound(vec.begin(),vec.end(),nums[i]))-vec.begin();
                vec[k]=nums[i];
            }
        }
        return vec.size();
    }
};