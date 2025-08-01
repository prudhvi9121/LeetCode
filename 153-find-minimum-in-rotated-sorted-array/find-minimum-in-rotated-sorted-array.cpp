class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int res = INT_MAX;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[left]<=nums[mid]){
                res = min(res,nums[left]);
                left = mid + 1;
            }else{
                res = min(res,nums[mid]);
                right = mid - 1;
            }
        }
        return res;
    }
};