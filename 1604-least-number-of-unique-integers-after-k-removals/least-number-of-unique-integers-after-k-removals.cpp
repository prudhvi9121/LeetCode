class Solution {
public:
  static bool cmp(const pair<int,int>& a, const pair<int,int>& b){
    return (a.second < b.second);
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto it: arr)
            mp[it]++;
            
        vector<pair<int,int>> mm;
        for(auto it: mp){
            mm.push_back(make_pair(it.first, it.second));
        }
        sort(mm.begin(), mm.end(), cmp);
        int count = mm.size();
        for(auto it: mm) {
            if(k >= it.second) {
                k -= it.second;
                count--;
            } else {
                break;
            }
        }
        return count;
    }
};