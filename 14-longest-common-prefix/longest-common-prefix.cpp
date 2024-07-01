class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string samp=strs[0];
        for(int i=1;i<strs.size();i++){
            string k=strs[i];
            string temp;
            for(int j=0;j<min(k.size(),samp.size());j++){
                if(samp[j]==k[j]){
                    temp+=samp[j];
                }else break;
            }
            samp=temp;
        }
        return samp;
    }
};