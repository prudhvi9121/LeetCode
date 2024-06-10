class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int flg = 0;
        if (n < 0)
            flg = 1;
        n = abs(n);
        while (n) {
            if (n % 2 != 0) {
                ans *= x;
            }
            x *= x;
            n /= 2;
        }
        if (flg)
            return 1 / ans;
        return ans;
    }
};