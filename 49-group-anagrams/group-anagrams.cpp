class Solution {
public:
    unordered_map<char,int>prime;
     void giveprime(){
        int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,101};
        char cur = 'a';
        for (int i = 0; i < 26; ++i) {
            prime[cur] = primes[i];
            ++cur;
        }
    }
    long long mod=1e9+7;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        giveprime();
        vector<int>res1;
        unordered_map<long long,vector<string>>result;
        for(int i=0;i<strs.size();i++){
            long long ans=1;
            for(auto it:strs[i]){
                ans=((ans%mod)*(prime[it]%mod))%mod;
            }
            result[ans].push_back(strs[i]);
        }
        vector<vector<string>>fin;
        for(auto it:result){
            vector<string>samp;
            for(auto m:it.second){
                //cout<<m<<" ";
                samp.push_back(m);
            }
           // cout<<endl;
            fin.push_back(samp);
        }
        return fin;
    }
};