class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        return  n!=(-2147483648) && !(n&(n-1)) && n!=0;
    }
};