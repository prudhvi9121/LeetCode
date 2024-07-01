class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int res=INT_MAX;
        for(int i=0; i<a.size();i++){
            if(a[i]!=b[0]) continue;
            else{
                int k=i,p=0,cnt=1,flg=0;
                string st=a;
                while(k<st.size()){
                    if(st[k]!=b[p]){
                        break;
                    }
                    if(p==b.size()-1){
                        flg=1;
                        break;
                    }
                    if(k==st.size()-1){
                        cnt++;
                        st=st+a;
                    }
                    p++;
                    k++;
                }
                if(flg) res=min(res,cnt);
            }
        }
        return (res==INT_MAX) ? -1:res;
    }
};