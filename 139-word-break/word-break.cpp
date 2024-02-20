class Solution {
public:
    unordered_map<string,int>mp;
    int dp[305];
    int word(string s,int i){
        if(i==s.size()) return 1;
        if(dp[i]!=-1) return dp[i];
        int k=0;
        for(int j=i+1;j<=s.size();j++){
            if(mp.find(s.substr(i,j-i))!=mp.end()){
                k=word(s,j);
                dp[j]=k;
            }
            if(k==1) return 1;
        }
        return k;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        for(auto it:wordDict) mp[it]++;
        return word(s,0);
    }
};