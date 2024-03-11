class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]].push_back(i);
        vector<int> vis(s.size(), 0);
        string res;
        for (int i = 0; i < order.size(); i++) {
            if (mp.find(order[i]) != mp.end()) {
                for(auto it:mp[order[i]]){
                    vis[it]=1;
                    res+=order[i];
                }
            }
        }
        for(int i=0;i<vis.size();i++){
            if(!vis[i]) res+=s[i];
        }
        return res;
    }
};