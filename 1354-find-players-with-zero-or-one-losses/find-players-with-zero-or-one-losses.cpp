class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>k1;
        map<int,int>k2;
        for(int i=0;i<matches.size();i++){
            k1[matches[i][0]]++;
            k2[matches[i][1]]++;
        }
        vector<int>win;
        vector<int>loss;
        for(auto it:k1){
            if(k2.find(it.first)==k2.end()) win.push_back(it.first);
        }
        for(auto it:k2) if(it.second==1) loss.push_back(it.first);
        return {win,loss};
    }
};