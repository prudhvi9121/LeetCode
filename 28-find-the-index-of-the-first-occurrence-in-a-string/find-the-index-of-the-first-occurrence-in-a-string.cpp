class Solution {
public:
    int strStr(string haystack, string needle) {
        int k1=haystack.size();
        int k2=needle.size();
        if(k1<k2) return -1;
        for (int i = 0; i <= k1 - k2; i++) {
            if (haystack.substr(i, k2) == needle) {
                return i;
            }
        }
        
        return -1;
    }
};