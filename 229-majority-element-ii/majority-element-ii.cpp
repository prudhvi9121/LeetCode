class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = INT_MIN, el2 = INT_MIN, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt1 == 0 && el2 != nums[i]) {
                cnt1 = 1;
                el1 = nums[i];
            } else if (cnt2 == 0 && el1 != nums[i]) {
                cnt2 = 1;
                el2 = nums[i];
            } else if (el1 == nums[i]) {
                cnt1++;
            } else if (el2 == nums[i]) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for (auto it : nums) {
            if (el1 == it)
                cnt1++;
            if (el2 == it)
                cnt2++;
        }
        vector<int> ans;
        int mini = (nums.size() / 3) + 1;
        if (cnt1 >= mini)
            ans.push_back(el1);
        if (cnt2 >= mini)
            ans.push_back(el2);
        return ans;
    }
};