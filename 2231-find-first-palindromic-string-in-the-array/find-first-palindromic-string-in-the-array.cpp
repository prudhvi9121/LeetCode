class Solution {
public:
    int palin(string word){
        int n=word.size(),j;
        for(int i=0,j=n-1;i<((int)(n/2));i++,j--){
            if(word[i]!=word[j]) return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(palin(words[i])) return words[i];
        }
        return "";
    }
};