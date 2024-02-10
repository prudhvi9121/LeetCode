class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.length(),i=0,j=0;
        int res=0;
        while(i<n){
           cout<<"####### "<<i<<" "<<j<<" "<<res<<" "<<s[i]<<endl;
            
            if(mp.find(s[i])==mp.end()){
                mp.insert({s[i],i});
                res=max(res,i-j+1);
            }
            else{
                cout<<s[i]<<" -- \n";
                if(j<=mp[s[i]]){j=mp[s[i]]+1;
               }
                else{
                    res=max(res,i-j+1);
                }
                 mp[s[i]]=i;
            }
            i++;
        }
        cout<<"####### "<<i<<" "<<j<<" "<<res<<endl;
        res=max(res,i-j);
        return res;
    }
};