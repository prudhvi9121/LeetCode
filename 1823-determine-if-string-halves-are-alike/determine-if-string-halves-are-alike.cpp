class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt=0,n=s.size();
        for(int i=0;i<(n/2);i++){
            char c = (char) tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u') cnt++;
        }
        for(int i=(n/2);i<n;i++){
            char c = (char) tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u') cnt--;
        }
        cout<<cnt;
        return cnt==0;
    }
};