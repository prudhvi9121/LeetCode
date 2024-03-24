class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(1){
            if(nums[i]==-1) return i;
            else{
                int temp = i;
                i = nums[i];
                nums[temp] = -1;
            }
            
        }
        return 0;
    }
};