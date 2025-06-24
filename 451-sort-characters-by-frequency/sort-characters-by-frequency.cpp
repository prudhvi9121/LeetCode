class Solution {
public:
    static bool cmp(const pair<int,char>&a,const pair<int,char>&b){
        return a.first>b.first;
    }
    string frequencySort(string s) {
        vector<pair<int,char>>freq(75);
        for(int i=0;i<s.size();i++){
            int pos = s[i]-48;
            freq[pos].first+=1;
            freq[pos].second=s[i];
        }
        sort(freq.begin(),freq.end(),cmp);
        string res;
        for(auto it:freq){
            if (it.first == 0) continue;
            res.append(it.first, it.second);
        }
        return res;
    }
};