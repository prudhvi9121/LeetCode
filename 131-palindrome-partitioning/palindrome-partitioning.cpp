class Solution {
public:
    vector<vector<string>>res;
    bool is_pali(string sub){
        int i=0,n=sub.size();
        int k=n-1;
        for(int i=0,k=n-1;i<n/2;i++,k--){
            if(sub[i]!=sub[k]) return false;
        }
        return true;
    }
    void string_parititon(string s,vector<string>&cur,int st){
        if(st==s.size()){
            res.push_back(cur);
            return ;
        }
        for(int i=st;i<s.size();i++){
            // cout<<st<<" "<<i<<endl;
            string sub=s.substr(st,i-st+1);
            if(is_pali(sub)){
                cur.push_back(sub);
                string_parititon(s,cur,i+1);
                cur.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        string_parititon(s,curr,0);
        return res;
    }
};