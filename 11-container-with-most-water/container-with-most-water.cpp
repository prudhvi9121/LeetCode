class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxi = 0;
        while(left<right){
            int l=height[left];
            int r=height[right];
            maxi=max(min(l,r)*(right-left) , maxi);
            if(l>r)right--;
            else left++;
        }
        return maxi;
    }
};