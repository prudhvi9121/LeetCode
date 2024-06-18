class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> res;
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                long long samp = nums[i] + nums[j];
                int k = j + 1, l = n - 1;
                while (k < l) {
                    long long sum = samp + nums[k] + nums[l];
                    if (sum == target) {
                        res.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else
                        l--;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:res) ans.push_back(it);
        return ans;
    }
};