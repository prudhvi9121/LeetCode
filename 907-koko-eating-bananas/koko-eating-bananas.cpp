class Solution {
public:
    bool caneat(int mid,vector<int>&piles,int h){
        long sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]+mid-1)/mid;
        }
        return (sum<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());;
        int ans = right;
        while(left<=right){
            int mid = left + (right - left)/2;
            bool find = caneat(mid,piles,h);
            if(find){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
};