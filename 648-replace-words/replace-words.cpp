class Solution {
public:
    string replaceWords(vector<string>& dic, string sentence) {
        unordered_map<string, int> mp;
        for (auto it : dic)
            mp[it]++;
        string res, temp;
        int flg = 0;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                res += temp + " ";
                temp = "";
                flg = 0;
            } else {
                if (!flg) {
                    temp += sentence[i];
                }
                if (mp[temp]) {
                    flg = 1;
                }
            }
        }
        res += temp;
        return res;
    }
};