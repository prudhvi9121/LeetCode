class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<num.size();i++)mp[num[i]]=i;
        for(int i=0;i<num.size();i++){
           // if(target-num[i]!=num[i]){
                if(mp.find(target-num[i])!=mp.end()){
                    int k=mp[target-num[i]];
                    return {min(k,i)+1,max(k,i)+1};
                }
           // }
        }
        return {};
    }
};