class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int prod=1;
        int ans=0;
        while(j<n){
            prod*=nums[j];
            while(prod>=k && i<=j){
                prod/=nums[i];
                i++;
            }
            cout<<(j-i)+1<<endl;
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};