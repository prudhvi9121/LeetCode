class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX,sum=0,i=0,j=0;
        while(j<nums.size() ){
            if(sum<target) sum+=nums[j++];
            else{
                while(sum>=target){
                    mini=min(mini,j-i);
                    sum-=nums[i++];
                }
            }
            // cout<<mini<<" "<<j<<endl;
        }
        while(sum>=target){
            mini=min(mini,j-i);
            sum-=nums[i++];
        }
        return (mini==INT_MAX) ? 0 :  mini;
    }
};