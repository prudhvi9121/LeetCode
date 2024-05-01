class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=-1;
        for(int j=0;j<word.size();j++){
            if(ch==word[j]){
                i=j;
                break;
            }
        }
        if(i==-1) return word;
        string res;
        for(int j=0;j<=i;j++) res+=word[j];
        reverse(res.begin(),res.end());
        for(int j=i+1;j<word.size();j++) res+=word[j];
        return res;
    }
};