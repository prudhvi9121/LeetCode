class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        int cnt=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                cnt++;
            }
            else{
                if(mp.find(cnt)!=mp.end()){
                    return 0;
                }
                mp.insert({cnt,0});
                cnt=1;
            }
        }
        if(mp.find(cnt)!=mp.end()){
                    return 0;
        }
        return 1;
    }
};