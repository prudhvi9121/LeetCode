class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string k="123456789";
        vector<int>res;
        int l=log10(low)+1;
        int r=log10(high)+1;
        for(int i=l;i<=r;i++){
            for(int j=0;j<=9-i;j++){
                int st=stoi(k.substr(j,i));
                if(st>=low && st<=high) res.push_back(st);
            }
        }
        return res;
    }
};