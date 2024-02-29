/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>qq;
        qq.push(root);
        if(root->val%2==0) return 0;
        vector<vector<int>>mat;
        while(!qq.empty()){
            int k=qq.size();
            vector<int>a1;
            for(int i=0;i<k;i++){
                auto t=qq.front();
                qq.pop();
                a1.push_back(t->val);
                if(t->left){ 
                    qq.push(t->left);
                    
                }
                if(t->right){
                    qq.push(t->right);
                    //a1.push_back(t->val);
                } 
            }
            mat.push_back(a1);
        }
        int cnt=0;
        for(int i=1;i<mat.size();i++){
            for(int j=0;j<mat[i].size()-1;j++){
                if(i&1){
                    if(mat[i][j]%2 || mat[i][j]<=mat[i][j+1]) return 0;
                }
                else{
                    if(mat[i][j]%2==0 || mat[i][j]>=mat[i][j+1]) return 0;
                }
            }
            if(i&1){
                if(mat[i][mat[i].size()-1]%2) return 0;
            }
            else{
                if(mat[i][mat[i].size()-1]%2==0) return 0;
            }
        }
        return 1;
    }
};