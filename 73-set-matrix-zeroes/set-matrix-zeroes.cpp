class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int ar1[row],ar2[col];
        memset(ar1,0,sizeof(ar1));
        memset(ar2,0,sizeof(ar2));
        for(int i=0; i<row; i++){
            for(int j=0;j<col;j++){
                if(!matrix[i][j]){
                    ar1[i]++;
                    ar2[j]++;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(ar1[i]){
                for(int j=0;j<col;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<col;i++){
            if(ar2[i]){
                for(int j=0;j<row;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};