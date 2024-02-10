class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0,n=s.size();
        for(int i=0;i<n;i++){
            string str;
            for(int j=i;j<n;j++){
                str+=s[j];
                string rev = string(str.rbegin(), str.rend());
                if(str==rev) cnt++;
            }
        }
        return cnt;
    }
};