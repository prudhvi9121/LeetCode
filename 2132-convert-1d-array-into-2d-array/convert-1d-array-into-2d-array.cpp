class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vec;
        if (m * n != original.size()) {
            return {}; 
        }
        int k=0;
        for(int i=0;i<m;i++){
            vector<int>samp;
            for(int j=0;j<n;j++){
                samp.push_back(original[k++]);
            }
            vec.push_back(samp);
        }
        

        return vec;
    }
};