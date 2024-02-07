class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pp;
        for(auto it:mp){
            pp.push({it.second,it.first});
        }
        string res;
        while(!pp.empty()){
            auto a=pp.top();
            int k=a.first;
            while(k--){
                res+=a.second;
            }
            pp.pop();
        }
        return res;
    }
};