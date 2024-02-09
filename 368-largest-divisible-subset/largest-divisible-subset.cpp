class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        // if()
        for(int i=0;i<nums.size();i++){
            vector<int>samp;
            int hcf=nums[i];
            samp.push_back(hcf);
            for(int j=i-1;j>=0;j--){
                if(hcf%nums[j]==0){
                    samp.push_back(nums[j]);
                    hcf=nums[j];
                }
            }
            hcf=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]%hcf==0){
                    samp.push_back(nums[j]);
                    hcf=nums[j];
                }
            }
            cout<<endl;
            if(samp.size()>res.size()){
                res=samp;
            }
        }
        return res;
    }
};