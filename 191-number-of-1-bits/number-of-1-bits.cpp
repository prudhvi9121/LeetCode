class Solution {
public:
    int hammingWeight(uint32_t n) {
        cout<<n<<endl;
        int cnt=0;
        for(int i=31;i>=0;i--){
            if((1<<i)&n) cnt++;
        }
        return cnt;
    }
};