class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int>res(2,0);
        unordered_map<int,int>mp;
        for(int i=0;i<=right;i++){
            int val = target-numbers[i];
            if(mp.find(val)!=mp.end()){
                res[0]=mp[val]+1;
                res[1]=i+1;
                return res;
            }else{
                mp[numbers[i]]=i;
            }
        }
        return res;
    }
};