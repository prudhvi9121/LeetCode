class Solution {
public:
    int ans = 0;
    void merge(vector<int>& arr, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        vector<int> temp;
        while (left <= mid && right <= high) {
            if (arr[left] > 2LL * arr[right]) {
                ans += (mid - left + 1);
                right++;
            } else {
                left++;
            }
        }
        left = low;
        right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            } else {
                temp.push_back(arr[right++]);
            }
        }
        while (left <= mid)
            temp.push_back(arr[left++]);
        while (right <= high)
            temp.push_back(arr[right++]);
        for (int i = 0; i < temp.size(); i++) {
            arr[low + i] = temp[i];
        }
    }
    void ms(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            ms(nums, low, mid);
            ms(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }
    int reversePairs(vector<int>& nums) {
        ms(nums, 0, nums.size() - 1);
        return ans;
    }
};