class Solution {
public:
    bool check(char c){
        c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char>kk;
        for(int i=0;i<s.size();i++){
            if(check(s[i])) kk.push_back(s[i]);
        }
        sort(kk.begin(),kk.end());
        int k=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                res+=kk[k++];
            }
            else res+=s[i];
        }
        return res;
    }
};