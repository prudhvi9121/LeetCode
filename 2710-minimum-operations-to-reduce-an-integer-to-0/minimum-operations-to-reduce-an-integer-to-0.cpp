class Solution {
public:
    int helper(int n){
        cout<<n<<endl;
        if((n&(n-1))==0) return 1;
        int k=floor(log2(n));
        int k2=ceil(log2(n));
        return 1+helper(min(abs(n-(1<<k)), abs(n-(1<<k2)) ));
    }
    int minOperations(int n) {
        return helper(n);
        int cnt=0;
        int k=floor(log2(n));
        int k2=ceil(log2(n));
        cout<<k<<" "<<k2<<endl;
        // while(n){
        //     int k=floor(log2(n));
            
        //     cout<<n<<" "<<(1<<k)<<endl;
        //     n-=(1<<k);
        //     cnt++;
        // }
        return cnt;
    }
};