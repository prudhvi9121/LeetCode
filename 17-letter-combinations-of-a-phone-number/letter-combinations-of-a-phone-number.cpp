class Solution {
public:

    vector<string>samp{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void Phonecombos(string dig,int i,vector<string>&ls,string st){
        if(i>=dig.length()){
            ls.push_back(st);
            return ;
        }
        int digit=dig[i]-'0';
        for(int k=0;k<samp[digit].size();k++){
            st.push_back(samp[digit][k]);
            cout<<st<<endl;
            Phonecombos(dig,i+1,ls,st);
            st.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string>ls;
        Phonecombos(digits,0,ls,"");
        return ls;
    }
};