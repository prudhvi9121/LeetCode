class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res=0,n=tickets.size();
        while(tickets[k]){
            for(int i=0;i<n;i++){
                if(tickets[i]!=0){
                    tickets[i]-=1;
                    res++;
                }
                if(!tickets[k])return res;
            }
            
        }
        return res;
    }
};