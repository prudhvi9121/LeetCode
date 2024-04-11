class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        string res;
        if(k==num.size()) return "0";
        for(int i=0;i<num.size();i++){
            while(!st.empty() && k && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k){
            st.pop();
            k--;
        }
        while(!st.empty()){
            char c=st.top();
            res+=(c);
            st.pop();
        }
        reverse(res.begin(),res.end());
        string ans;
        int flg=0;
        for(int i=0;i<res.size();i++){
            if(flg==0 && res[i]=='0') continue;
            else{
                ans+=res[i];
                flg=1;
            }
        }
         return (ans=="" )?  "0" :  ans;
    }
};