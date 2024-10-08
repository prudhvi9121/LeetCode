class Solution {
public:
    bool binarysearch(int low,int high,int row,vector<vector<int>>&matrix,int tar){
        while(low<=high){
            int mid=(high+low)/2;
            if(matrix[row][mid]==tar) return true;
            else if(matrix[row][mid]<tar) low=mid+1;
            else high=mid-1;
        }return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            if(matrix[i][0]<= target && matrix[i][col-1]>=target && binarysearch(0,col-1,i,matrix,target))
            return true;
        }
        return false;
    }
};