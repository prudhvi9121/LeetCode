class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        int maxi=0;
        for(int i=1;i<(1<<n);i++){
            vector<int>abc(26,0);
            int leng=0;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    string s=arr[j];
                    //cout<<s<<" ";
                    int flag=0;
                    for(auto it:arr[j]){
                        if(abc[it-'a']){
                            flag=1;
                            break;
                        }
                    }
                    if(!flag){
                        int bob=1;
                        for(auto it:arr[j]){
                            if(abc[it-'a']) {
                                bob=0;
                                break;
                            }
                            abc[it-'a']=1;
                        }
                        if(bob==1)leng+=arr[j].size();

                    }
                }
            }
            //cout<<endl;
            maxi=max(maxi,leng);
        }
        return maxi;
    }
};