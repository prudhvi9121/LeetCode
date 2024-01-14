class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int a1=word1.size(),a2=word2.size();
        if(a1!=a2) return 0;
        vector<int>vec1(26,0);
        vector<int>vec2(26,0);
        for(int i=0;i<a1;i++){
            vec1[int(word1[i])-97]+=1;
        }
        for(int i=0;i<a2;i++){
            vec2[int(word2[i])-97]+=1;
        }
        for(int i=0;i<26;i++){
            if((vec1[i]==0 && vec2[i]==0) || (vec1[i] && vec2[i])) continue;
            else return 0; 
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        //for(auto it:vec1) cout<<it<<endl;
        return vec1==vec2;
    }
};