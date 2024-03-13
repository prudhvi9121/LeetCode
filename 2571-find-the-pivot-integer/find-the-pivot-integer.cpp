class Solution {
public:
    int pivotInteger(int n) {
        vector<int>vv(n,0);
        vv[0]=1;
        for(int i=1;i<n;i++){
            vv[i]=vv[i-1]+(i+1);
        }
        int check=vv[n-1];
        cout<<check<<" ";
        for(auto it:vv) cout<<it<<" ";
        for(int i=0;i<n;i++){
            if(check-vv[i]+i+1 == vv[i]) return i+1;
        }
        return -1;
    }
};