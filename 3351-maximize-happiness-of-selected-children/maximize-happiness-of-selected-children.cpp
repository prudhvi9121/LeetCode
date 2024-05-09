class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long res=0,l=0,i=happiness.size()-1;
        while(k--){
            if(happiness[i]-(l) >0) res+=happiness[i]-(l);
            l++;
            i--;
        }
        return res;
    }
};