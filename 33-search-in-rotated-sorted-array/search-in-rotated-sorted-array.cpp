class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right  = nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<=nums[right]){
                if(nums[mid]<=target && nums[right]>=target)left = mid + 1;
                else right = mid - 1;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target && nums[mid]>=target)right = mid - 1;
                else left = mid + 1;
            }
        }
        return -1;
    }
};