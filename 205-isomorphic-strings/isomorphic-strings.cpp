class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ss,tt;
        for(int i=0;i<s.size();i++){
            if(ss.find(s[i])==ss.end() && tt.find(t[i])==ss.end()){
                ss[s[i]]=t[i];
                tt[t[i]]=s[i];
            }
            else{
                if(ss[s[i]]!=t[i] || tt[t[i]]!=s[i]) return 0;
            }
        }
        return 1;
    }
};