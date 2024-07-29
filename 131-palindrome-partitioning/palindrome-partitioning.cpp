class Solution {
public:
    vector<vector<string>> ans;
    bool palindrome(string k){
        for(int i=0,j=k.size()-1;i<k.size()/2;i++,j--){
            if(k[i]!=k[j]) return 0;
        }
        return 1;
    }
    void solve(vector<string>&samp,const string &s,int i){
        if(i==s.size()){
            ans.push_back(samp);
            return ;
        }
        for(int ind=i;ind<s.size();ind++){
            string sub=s.substr(i,ind-i+1);
            //cout<<ind<<" "<<i-ind+1<<" "<<sub<<endl;
            if(palindrome(sub)){
                samp.push_back(sub);
                solve(samp,s,ind+1);
                samp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>samp;
        solve(samp,s,0);
        return ans;
    }
};