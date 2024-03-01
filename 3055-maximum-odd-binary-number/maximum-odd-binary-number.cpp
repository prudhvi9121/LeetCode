class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size(),ones=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
        }
        ones--;
        string res;
        for(int i=0;i<ones;i++)res+='1';
        for(int i=0;i<(n-ones-1);i++)res+='0';
        return res+'1';
    }
};