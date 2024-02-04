class Solution {
public:
    bool is_vis(vector<int>&st,vector<int>&tt){
        for(int i=0;i<58;i++){
            if(tt[i] && st[i]<tt[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int>s_vis(58,0);
        vector<int>t_vis(58,0);
        for(int i=0;i<t.size();i++){
            t_vis[t[i]-'A']+=1;
        }
        int i=0,j=0,n=s.size(),mini=INT_MAX,left=0;
        while(j<n){
            cout<<i<<" "<<j<<endl;
            s_vis[s[j]-'A']+=1;
            while(is_vis(s_vis,t_vis)){
                if(j-i+1<mini){
                    left=i;
                    mini=j-i+1;
                }
                s_vis[s[i]-'A']-=1;
                i++;
            }
            j++;
        }
        //cout<<(is_vis(s_vis,t_vis));
        // for(auto it:s_vis){
        //     cout<<it<<" ";
        // }
        if(mini==INT_MAX) return "";
        //cout<<left<<" "<<mini<<endl;
        return s.substr(left,mini);
    }
};