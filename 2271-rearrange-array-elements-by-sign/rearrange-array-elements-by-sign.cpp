class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a1, a2, a;
        for (int i : nums) {
            if (i < 0)
                a1.push_back(i);
            else
                a2.push_back(i);
        }
        for (size_t i = 0; i < a1.size(); ++i) {
            a.push_back(a2[i]);
            a.push_back(a1[i]);
        }
        return a;
    }
};