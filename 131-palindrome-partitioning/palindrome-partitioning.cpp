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
        if(i>s.size()) return ;
        for(int ind=i;i<s.size();i++){
            string sub=s.substr(ind,i-ind+1);
            //cout<<ind<<" "<<i-ind+1<<" "<<sub<<endl;
            if(palindrome(sub)){
                samp.push_back(sub);
                solve(samp,s,i+1);
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