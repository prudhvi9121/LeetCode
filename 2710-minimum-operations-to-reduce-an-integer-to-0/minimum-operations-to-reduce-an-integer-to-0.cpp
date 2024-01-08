class Solution {
public:
    int helper(int n){
        if((n&(n-1))==0) return 1;
        int k=floor(log2(n));
        return 1+helper(min(abs(n-(1<<k)), abs(n-(1<<(k+1))) ));
    }
    int minOperations(int n) {
        return helper(n);
            }
};