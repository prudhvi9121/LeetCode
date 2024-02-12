class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>st;
        st.push(prices[0]);
        int res=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<st.top()){
                st.push(prices[i]);
            }
            else res=max(res,prices[i]-st.top());
        }
        return res;
    }
};