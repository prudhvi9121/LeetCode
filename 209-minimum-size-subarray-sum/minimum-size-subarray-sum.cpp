class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int res = INT_MAX;
        int j = 0;
        int temp = 0;
        while(i<n){
            temp += nums[i];
           while(temp >= target){
                res = min(res,(i-j+1));
                temp -= nums[j];
                j++;
            }
            i++;
        }
        return res==INT_MAX ? 0 : res;
    }
};