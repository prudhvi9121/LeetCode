class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<=2) return 0;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]&1 && arr[i+1]&1 && arr[i+2]&1) return 1;
        }
        return 0;
    }
};