class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<long long ,long long>>vec(1);
        long long res=0;
        for(int i=1;i<nums.size();i++){
            unordered_map<long long ,long long>mp;
            for(int j=0;j<i;j++){
                    long long  p=nums[i] ,q=nums[j];
                    if(vec[j][p-q]){
                        res+=vec[j][p-q];
                        // if(mp[nums[i]-nums[j]]){
                            
                        //     mp[nums[i]-nums[j]]+=(vec[j][nums[i]-nums[j]]+1);
                        // }
                        mp[p-q]+=vec[j][p-q]+(1*(1ll));
                    }
                    else{
                        mp[p-q]+=(1*(1ll));
                    }
            }
            vec.push_back(mp);
           // vec.push_back(mp);
           // cout<<vec[0][2]<<endl;
        }
        // for(auto it:vec){
        //     for(auto k:it){
        //         cout<<k.first<<" "<<k.second<<endl;
        //     }
        //     cout<<"##"<<endl;
        // }
        return (int)res;
    }
};