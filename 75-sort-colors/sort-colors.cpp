class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o=0,z=0,t=0;
        for(auto it:nums){
            if(it==1) o++;
            else if(it==2) t++;
            else z++;
        }
        for(int i=0;i<z;i++) nums[i]=0;
        for(int i=z;i<z+o;i++) nums[i]=1;
        for(int i=z+o;i<nums.size();i++) nums[i]=2;
    }
};