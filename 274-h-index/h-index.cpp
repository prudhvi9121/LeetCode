class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int cnt=1;
        for(int i=citations.size()-1;i>=0;i--){
            if(citations[i]>=cnt){
                cnt++;
            }else break;
        }
        return cnt-1;
    }
};