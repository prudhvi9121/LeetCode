class Solution {
public:
    int lengthOfLastWord(string s) {
        int flg=0,cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && !flg) continue;
            else if(s[i]==' '){
                break;
            }
            else{
                cnt++;
                flg=1;
            }
        }
        return cnt;
    }
};