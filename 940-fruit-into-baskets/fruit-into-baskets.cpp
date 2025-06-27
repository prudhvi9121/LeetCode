class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int res = 0, left = 0;
        for (int i = 0; i < fruits.size(); i++) {
            mp[fruits[i]]++;
            if(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0) mp.erase(fruits[left]);
                left++;
            }
            res=max(res,(i-left+1));
        }
        return res;
    }
};