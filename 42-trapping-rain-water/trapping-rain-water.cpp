class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),res=0;
        vector<int>pre1(n,0);
        vector<int>pre2(n,0);
        pre1[0]=height[0];
        pre2[n-1]=height[n-1];
        for(int i=1;i<n;i++) pre1[i]=max(height[i],pre1[i-1]);
        for(int i=n-2;i>=0;i--) pre2[i]=max(height[i],pre2[i+1]);
        // for(auto it:pre2) cout<<it<<" ";
        for(int i=0;i<n;i++){
            res+=  min(pre1[i],pre2[i]) - height[i];
        }
        return res;
    }
};