class Solution {
public:
    int find_st(int i,vector<int>&gas,int n){
        int k=i;
        int ans=0;
        while(k!=(i-1)%n){
            ans+=gas[k];
           // cout<<ans<<endl;
            if(ans<0) return -1;
            k=(k+1)%n;
            if(i==0 && k==n-1) break;
        }
        return i;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=0;
        int st=-1;
        for(int i=0;i<gas.size();i++){
            gas[i]-=cost[i];
            ans+=gas[i];
        }
        if(gas.size()==1 && gas[0]>=0) return 0;
        if(ans<0) return st;
        for(int i=0;i<gas.size();i++){
            if(gas[i]>0){
                st=find_st(i,gas,gas.size());
                if(st!=-1) return i;
            }
        }
        return st;
    }
};