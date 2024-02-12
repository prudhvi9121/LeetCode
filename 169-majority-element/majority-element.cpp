class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sam=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                sam=nums[i];
                cnt++;
            }
            else if(sam==nums[i]) cnt++;
            else cnt--;
        }
        return sam;
    }
};