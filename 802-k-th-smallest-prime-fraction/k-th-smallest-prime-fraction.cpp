class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double, pair<int, int>> mp;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                double fraction = static_cast<double>(arr[i]) / arr[j];
                mp[fraction] = make_pair(arr[i], arr[j]);
            }
        }
        int count = 0;
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            count++;
            if(count == k) {
                return {it->second.first, it->second.second};
            }
        }
        return {};
    }
};