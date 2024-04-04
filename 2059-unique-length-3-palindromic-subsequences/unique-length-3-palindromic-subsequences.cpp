class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int a[26] , b[26] ;
        memset(a, -1, sizeof(a));
        memset(b, -1, sizeof(b));
        int n = s.size();
        for(int i = 0; i < n; i++) {
            int t = s[i] - 'a';
            if (a[t] == -1) a[t] = i;
            else b[t] = i;
        }
        int count = 0;
        for(int i = 0; i < 26; i++) {
            if (b[i] != -1 &&  b[i]-a[i]>=2) {
                set<char> unique_chars;
                for(int j = a[i] + 1; j < b[i]; j++) {
                    unique_chars.insert(s[j]);
                }
                count += unique_chars.size();
            }
        }
        return count;
    }
};
