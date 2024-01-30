class Solution {
public:
    vector<string>res;
    vector<string>samp{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void Phonecombos(string dig,int i,vector<string>ls){
        if(i==dig.length()){
            for(auto it:ls){
                res.push_back(it);
            }
            return ;
        }
        int digit=dig[i]-'0';
        vector<string>examp(ls.begin(),ls.end());
        // for(auto k:examp){
        //     cout<<k<<endl;
        // }
       // cout<<samp[]
        ls.erase(ls.begin(),ls.end());
        for(int k=0;k<samp[digit].size();k++){
            for(auto it:examp){
                ls.push_back(it+samp[digit][k]);
            }
        }
        Phonecombos(dig,i+1,ls);
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string>ls{""};
        Phonecombos(digits,0,ls);
        
        return res;
    }
};