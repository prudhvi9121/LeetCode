class Solution {
public:
    int romanToInt(string str) {
        map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        for(int i=str.length()-1;i>=0;i--){
            ans+=mp[str[i]];
            if(i!=str.length()-1){ 
                if(mp[str[i]]<mp[str[i+1]]) {
                    ans-=(mp[str[i]])*2;
                }
            }
        }
        return ans;
    }
};