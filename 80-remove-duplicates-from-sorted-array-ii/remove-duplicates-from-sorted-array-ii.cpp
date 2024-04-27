class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1,res=0,n=nums.size();
        for (int i = 0; i < n-1; i++) {
            if(nums[i]==nums[i+1]){
                cnt++;
                if(cnt>2){
                    nums[i]=100000;
                    res++;
                    nums.push_back(-100000);
                }
            }
            else{
                cnt=1;
            }
        }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==100000){
        //         res++;
        //         nums.erase(nums.begin() + i);
        //     }
        // }
        nums.erase(remove(nums.begin(), nums.end(), 100000), nums.end());
        for(auto it:nums) cout<<it<<" ";
        return n-res;
    }
};