class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>vec(101,0);
        for(int i=0;i<nums.size();i++){
            vec[nums[i]]+=1;
        }
        int k= *max_element(vec.begin(),vec.end());
        int cnt=0;
       // for(auto it:vec) cout<<it<<endl;
       // cout<<k<<" b"<<endl;
        for(int i=0;i<vec.size();i++){
            if(k==vec[i]) cnt+=k;
        }
        return cnt;
    }
};